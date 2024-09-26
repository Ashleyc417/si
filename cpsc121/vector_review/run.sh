#!/bin/bash

# Set the output file name
OUTPUT="playlist"

# Compile the .cpp files into object files first
g++ -c main.cpp -o main.o
g++ -c Song.cpp -o Song.o

# Link the object files into the final executable
g++ main.o Song.o -o $OUTPUT

# Check if the compilation and linking were successful
if [ $? -eq 0 ]; then
    echo "Compilation successful! Executable created: $OUTPUT"
    
    # Clean up the object files
    rm main.o Song.o
    echo "Cleaned up intermediate object files."
else
    echo "Compilation failed!"

fi

