#!/bin/bash

echo "🚀 Welcome to the Interactive Linux & Git Training Warmup!"
echo "You'll practice essential Linux and Git commands step by step."
echo "==============================================================="
sleep 2

# Function to prompt user until correct input is entered, with hints
function ask_command() {
    local correct_command="$1"
    local prompt_message="$2"
    local hint_message="$3"

    while true; do
        read -p "$prompt_message: " user_input
        if [[ "$user_input" == "$correct_command" ]]; then
            eval "$user_input"
            echo "✅ Correct!"
            break
        elif [[ "$user_input" == "ls" ]]; then
            ls
        elif [[ "$user_input" == cd* ]]; then
            eval "$user_input"
        else
            echo "❌ Incorrect. Hint: $hint_message"
        fi
    done
    sleep 1
}

# Step 1: Show current directory
ask_command "pwd" "🔹 Step 1: Type the command to display your current directory" "This command prints the path of the folder you're in."

# Step 2: List files
ask_command "ls" "🔹 Step 2: Type the command to list the files in this directory" "This command shows all files and directories in your current location."

# Step 3: Create a directory
ask_command "mkdir ~/my-directory" "🔹 Step 3: Create a directory called 'my-directory' inside your home folder" "Use 'mkdir <foldername>' to make a new folder."

# Step 4: Navigate into the directory
echo "🔹 Step 4: Move into the 'my-directory' directory."
while true; do
    read -p "Type the command to navigate into 'my-directory': " user_input
    if [[ "$user_input" == "cd ~/my-directory" || "$user_input" == "cd my-directory" ]]; then
        eval "$user_input"
        echo "✅ Correct!"
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
ask_command "touch hello.txt code.cc" "🔹 Step 5: Create two files: 'hello.txt' and 'code.cc'" "Use 'touch <filename>' to create an empty file."

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
ask_command "nano code.cc" "🔹 Step 6: Open 'code.cc' in nano to edit the file" "Use 'nano <filename>' to open a file for editing."

# Step 7: Compile the C++ program (allow g++ or clang++)
echo "🔹 Step 7: Compile 'code.cc' into an executable named 'program'."
while true; do
    read -p "Type either 'g++ code.cc -o program' OR 'clang++ code.cc -o program': " user_input
    if [[ "$user_input" == "g++ code.cc -o program" || "$user_input" == "clang++ code.cc -o program" ]]; then
        eval "$user_input"
        echo "✅ Compiled successfully!"
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
ask_command "./program" "🔹 Step 8: Run your compiled program" "Use './<executable_name>' to run a compiled program."

# Step 9: Initialize Git
ask_command "git init" "🔹 Step 9: Initialize a Git repository in your current directory" "Use 'git init' to start tracking a project with Git."

# Step 10: Add files to Git
ask_command "git add ." "🔹 Step 10: Add all files in this directory to Git tracking" "Use 'git add .' to stage all files for commit."

# Step 11: Commit changes
ask_command "git commit -m 'Initial commit'" "🔹 Step 11: Commit your changes with the message 'Initial commit'" "Use 'git commit -m \"message\"' to save changes."

# Step 12: Remote repo instructions (not executed for safety)
echo "🔹 Step 12: To push this to GitHub, you would run:"
echo '  git remote add origin <your-repo-url>'
echo '  git push -u origin main'
echo "We won't execute this step automatically."

echo "✅ Congratulations! You've completed the Linux & Git practice session!"
exit 0
