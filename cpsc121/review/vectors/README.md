# Playlist Manager 🎶

## Objective
In this activity, you will create a program that manages a playlist of songs using vectors in C++. You will practice passing vectors to functions by value and by reference, observing how the two approaches affect the original vector.

<br>

## Set Up - Clone the Repository:
1. Click on the `code` and copy the https link.
2. Run `git clone` then paste that link.
3. Run `code .` to open the directory in VSCode and you're ready to go 🙂

<br>

## Instructions
1. **Create the Song Class:**
   
   Define a class named `Song` in `Song.h` that includes the following attributes:
   - `title` (string)
   - `artist` (string)
   - `duration` (float, representing the length of the song in minutes)

   Implement the constructor to initialize these attributes.


2. **Implement the Song Methods:**
   - In `Song.cpp`, implement the `display` method to show the song details in a formatted way.

4. **Implement the Main Functionality:**
   - In `main.cpp`, create a vector to hold the songs.
   - Write a function `addSong(std::vector<Song> playlist, Song newSong)` that takes a vector of songs by value and adds a new song to the playlist.
   - Write a function `displayPlaylist(const std::vector<Song>& playlist)` that takes the vector by reference and displays the titles and artists of all songs in the playlist.

5. **Testing the Functions:**
   - In the `main` function, prompt the user to enter details for a few songs, add them to the playlist, and then display the playlist.

<br>

## Starter Code
The starter code is provided in `main.cpp` and `Song.h`/`Song.cpp`. Fill in the TODO sections to complete the implementation.


