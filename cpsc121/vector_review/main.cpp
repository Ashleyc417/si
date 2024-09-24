#include <iostream>
#include <vector>
#include "Song.h"

// Function to add a song to the playlist (pass by value)
void addSong(std::vector<Song> playlist, Song newSong) {
    playlist.push_back(newSong);
    std::cout << "Added \"" << newSong.display() << "\" to the playlist.\n";
}

// Function to display the playlist (pass by reference)
void displayPlaylist(const std::vector<Song>& playlist) {
    std::cout << "Current Playlist:\n";
    for (const Song& song : playlist) {
        song.display();
    }
}

int main() {
    std::vector<Song> playlist; // Vector to hold the playlist
    std::string title, artist;
    float duration;
    char moreSongs;

    do {
        // Prompt for song details
        std::cout << "Enter the song title: ";
        std::getline(std::cin, title);
        std::cout << "Enter the artist: ";
        std::getline(std::cin, artist);
        std::cout << "Enter the duration (in minutes): ";
        std::cin >> duration;
        std::cin.ignore(); // Clear the input buffer

        // Create a new song
        Song newSong(title, artist, duration);
        // Add song to the playlist
        addSong(playlist, newSong); // Add song by value

        // Ask if the user wants to add another song
        std::cout << "Do you want to add another song? (y/n): ";
        std::cin >> moreSongs;
        std::cin.ignore(); // Clear the input buffer

    } while (moreSongs == 'y' || moreSongs == 'Y');

    // Display the current playlist
    displayPlaylist(playlist); // Display playlist by reference

    return 0;
}
