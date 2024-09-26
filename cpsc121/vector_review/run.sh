#!/bin/bash

# Compile the program
g++ -std=c++11 -Wall -o playlist_manager main.cpp Song.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful, running the program..."
  # Run the program
  ./playlist_manager
else
  echo "Compilation failed."
fi
