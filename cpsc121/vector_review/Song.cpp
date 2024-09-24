#include "Song.h"
#include <iostream>

// Constructor
Song::Song(std::string t, std::string a, float d) {
    title = t;
    artist = a;
    duration = d;
}

// Method to display the song details
void Song::display() const {
    std::cout << title << " by " << artist << " (" << duration << " mins)\n";
}
