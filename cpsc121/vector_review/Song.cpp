#include "Song.h"
#include <iostream>

// Constructor
Song::Song(std::string t, std::string a, float d) {
    // TODO: Initialize the member variables given the arguments
    title_ = t;
    artist_ = a;
    duration_ = d;
}

// Method to display the song details
void Song::display() const {
    // TODO: Print the song details in the format: "TITLE by ARTIST (DURATION)"
    std::cout << title_ << " by " << artist_ << " (" << duration_ << " minutes)\n";
}