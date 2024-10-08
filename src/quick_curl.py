import sys
import os

from rich import print
from pathlib import Path


# Constants to change runtime

# Which repo to curl files from, should be in the form "Username/RepoName"
this_github_repo = 'Ashleyc417/si'
# Specifies where to start iterating the tree from
# (. is the bottom of the repo, you can do things like ./.. or ./session1)
start_from = './cpsc121'
# Specifeis all of the files and folders to ignore completely when generating a
# curl statement
ignored = [
    '.git', '.vscode', '.idea', 'node_modules', 'venv', '__pycache__', 'src'
]


class FileEntry:
    def __init__(self, at: str, depth: int, index: int):
        self.link: Path = Path(at).resolve()
        if not self.link.exists():
            print(f'Error: {self.link} does not exist')
            sys.exit(1)
        self.entry_type: str = 'file' if self.link.is_file() else 'dir'
        self.activated: bool = False
        self.depth: int = depth
        self.index: int = index
        # Extension is the file location from the root of the repo
        self.extension : str = self.link.relative_to(Path(__file__).parent.parent)
        self.repo_link: str = f'https://raw.githubusercontent.com/{this_github_repo}/main/{self.extension}'
    def __str__(self):
        return f'{"    " * self.depth}[{self.index}] {self.link.name} {"✅" if self.activated else "❌"}'


class FileTree:
    def __init__(self, root: Path):
        self.entries: dict = {}
        def add(file: FileEntry):
            self.entries[len(self.entries)] = file
        def pre(curr: FileEntry, depth: int):
            if curr.link.name in ignored:
                return
            add(curr)
            if curr.entry_type == 'file':
                return
            else:
                for child in curr.link.iterdir():
                    pre(FileEntry(str(child),depth+1,len(self.entries)), depth + 1)
        pre(FileEntry(str(root), 0, 0), 0)

    def __str__(self):
        return '\n'.join([str(entry) for entry in self.entries.values()])

    def print(self):
        os.system('cls' if os.name == 'nt' else 'clear')
        self.fix_dirs()
        print(self.__str__() + '\n')

    def fix_dirs(self):
        for i in range(len(self.entries)):
            if self.entries[i].entry_type == 'dir':
                depth: int = self.entries[i].depth
                activated: bool = True
                for j in range(i + 1, len(self.entries)):
                    if self.entries[j].depth <= depth:
                        break
                    if not self.entries[j].activated:
                        activated = False
                        break
                self.entries[i].activated = activated

    def toggle(self, index: int):
        file: FileEntry = self.entries[index]
        if file.entry_type == 'file':
            file.activated = not file.activated
        else:
            depth: int = file.depth
            for i in range(index + 1, len(self.entries)):
                if self.entries[i].depth <= depth:
                    break
                else:
                    self.entries[i].activated = not self.entries[i].activated
            file.activated = not file.activated
        self.print()

    def make_curl(self):
        cmds: set = set()
        for i in range(len(self.entries)):
            file: FileEntry = self.entries[i]
            if file.activated and file.entry_type == 'file':
                out_file = str(file.extension) + "/" + file.link.name
                cmds.add(f'mkdir -p {file.extension}')
                cmds.add(f'touch {out_file}')
                cmds.add(f'curl --remote-name-all {file.repo_link} -o {out_file}')
        order: list[str] = ['mkdir', 'touch', 'curl']
        cmd_list: list[str] = sorted(list(cmds), key=lambda x: order.index(x.split(' ')[0]))
        return ' && '.join(cmd_list)

def main():
    # Grab start of directory
    root: Path = Path(__file__).parent.parent
    for step in start_from.split('/'):
        root = root / step
    if not root.exists():
        print(f'Error: {root} does not exist')
        sys.exit(1)
    if not root.is_dir():
        print(f'Error: {root} is not a directory')
        sys.exit(1)
    # Generate the file tree
    ft: FileTree = FileTree(root)
    prompt: str = ('Enter the index of the file you want to toggle, type "c" to generate the curl\n'
                  'command, or type "q" to quit.\nFolders will toggle all of their children.\n\n~ ')
    ft.print()
    choice: str = input(prompt)
    while choice != 'q':
        if choice != 'c':
            try:
                index: int = int(choice)
                ft.toggle(index)
            except:
                ft.print()
                print('\nInvalid input\n')
            choice = input(prompt)
        else:
            print('\nGenerating curl command...')
            print('\n' + ft.make_curl())
            exit(0)

if __name__ == '__main__':
    main()
