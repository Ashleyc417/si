#!/bin/bash

echo "🚀 Welcome to the Interactive Linux & Git Training Warm-Up!"
echo "You'll practice essential Linux and Git commands step by step."
echo "==============================================================="
sleep 2

# Function to prompt user until correct input is entered, with hints and explanations
function ask_command() {
    local correct_command="$1"
    local prompt_message="$2"
    local hint_message="$3"
   local explanation="$4"

    while true; do
        read -p "$prompt_message: " user_input
        if [[ "$user_input" == "$correct_command" ]]; then
            eval "$user_input"
            echo -e "\n✅ Correct!\n"
            echo "$explanation"
            echo ""
            break
        elif [[ "$user_input" == "ls" ]]; then
            ls
        elif [[ "$user_input" == cd* ]]; then
            eval "$user_input"
        else
            echo "❌ Incorrect. Hint: $hint_message"
            echo ""
        fi
    done
    sleep 1
}

# Step 1: Show current directory
ask_command "pwd" "🔹 Step 1: Type the command to display your current directory" \
"This command prints the path of the folder you're in." \
"'pwd' (Print Working Directory) shows you your current location in the system."

# Step 2: List files
ask_command "ls" "🔹 Step 2: Type the command to list the files in this directory" \
"This command lists all files and directories in your current location." \
"'ls' (List) displays the contents of the current directory. Use 'ls -l' for detailed info."

# Step 3: Create a directory
ask_command "mkdir ~/my-directory" "🔹 Step 3: Create a directory called 'my-directory' inside your home folder" \
"Use 'mkdir <foldername>' to make a new folder." \
"'mkdir' (Make Directory) creates a new folder. You can make multiple: 'mkdir <dir1> <dir2> <dir3>'."

# Step 4: Navigate into the directory
echo "🔹 Step 4: Move into the 'my-directory' directory."
while true; do
    read -p "Type the command to navigate into 'my-directory': " user_input
    if [[ "$user_input" == "cd ~/my-directory" || "$user_input" == "cd my-directory" ]]; then
        eval "$user_input"
        echo -e "\n✅ Correct!\n"
        echo "'cd' (Change Directory) moves you into a folder. Use 'cd ..' to go back."
        echo ""
        break
    elif [[ "$user_input" == "ls" ]]; then
        ls
    elif [[ "$user_input" == cd* ]]; then
        eval "$user_input"
    else
        echo "❌ Incorrect. Hint: Use 'cd <foldername>' to change into a directory."
    fi
done
sleep 1

# Step 5: Create files
ask_command "touch hello.txt code.cc" "🔹 Step 5: Create two files: 'hello.txt' and 'code.cc'" \
"Use 'touch <filename1> <filename2> ...' to create one or more empty files." \
"'touch' creates empty files. You can make multiple at once: 'touch <file1.txt> <file2.cpp>'."

# Step 6: Edit the C++ file
echo "🔹 Step 6: Now, let's edit 'code.cc' and add a C++ Hello World program."
echo "Open 'code.cc' in nano, add the following, then save and exit (Ctrl+X, Y, Enter):"
echo '--------------------------------------------------------'
echo '#include <iostream>'
echo 'int main() {'
echo '    std::cout << "Hello, World!" << std::endl;'
echo '    return 0;'
echo '}'
echo '--------------------------------------------------------'
ask_command "nano code.cc" "🔹 Step 6: Open 'code.cc' in nano to edit the file" \
"Use 'nano <filename>' to open a file for editing." \
"'nano' is a simple text editor. Press 'Ctrl+X' to exit, 'Y' to save changes. 'vim' (or 'nvim') is also a simple text editor like nano! I personally use 'nvim' which stands for neovim, a newer and nicer version of vim :)"

# Step 7: Compile the C++ program (allow g++ or clang++)
echo "🔹 Step 7: Compile 'code.cc' into an executable named 'program'."
while true; do
    read -p "Type either 'g++ code.cc -o program' OR 'clang++ code.cc -o program': " user_input
    if [[ "$user_input" == "g++ code.cc -o program" || "$user_input" == "clang++ code.cc -o program" ]]; then
        eval "$user_input"
        echo -e "\n✅ Compiled successfully!\n"
        echo "'g++' and 'clang++' both compile C++ programs. '-o' specifies the output file name. You can also use the command 'g++ <filename>' or 'clang++ <filename>' and it will create a default executable file called a.out. Also note that using the default command doesn't limit you to only compiling one file. You can still compile multiple files using the same format (ex. 'clang++ <file1.cpp.> <file2.cc>...)"
        echo ""
        break
    elif [[ "$user_input" == "ls" ]]; then
        ls
    elif [[ "$user_input" == cd* ]]; then
        eval "$user_input"
    else
        echo "❌ Incorrect. Hint: Use 'g++ <filename> -o <output>' OR 'clang++ <filename> -o <output>' to compile C++ code."
    fi
done
sleep 1

# Step 8: Run the program
ask_command "./program" "🔹 Step 8: Run your compiled program" \
"Use './<executable_name>' to run a compiled program." \
"'./' runs executables in the current folder. Try running './program' now."

# Step 9: Initialize Git
ask_command "git init" "🔹 Step 9: Initialize a Git repository in your current directory" \
"Use 'git init' to start tracking a project with Git."\
"'git init' creates a hidden '.git' folder that stores version history."

# Step 10: Add files to Git
ask_command "git add ." "🔹 Step 10: Add all files in this directory to Git tracking" \
"Use 'git add .' to stage all files for commit." \
"'git add' stages changes. Use 'git status' to check tracked files."

# Step 11: Commit changes
ask_command "git commit -m 'Initial commit'" "🔹 Step 11: Commit your changes with the message 'Initial commit'" \
"Use 'git commit -m \"message\"' to save changes." \
"Commits store snapshots. Always write meaningful commit messages!"

# Step 12: Remote repo instructions (not executed for safety)
echo "🔹 Step 12: To push this to GitHub, you would run:"
echo '  git remote add origin <your-repo-url>'
echo '  git push -u origin main'
echo "We won't execute this step automatically."

echo -e "\n✅ Congratulations! You've completed the Linux & Git practice warm-up!\n"
exit 0
