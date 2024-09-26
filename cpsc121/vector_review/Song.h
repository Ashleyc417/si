#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
public:
    // Constructor
    Song(std::string t, std::string a, float d);
    
    // Method to display the song details
    void display() const;

private:
    std::string title_;
    std::string artist_;
    float duration_; // in minutes
};

#endif // SONG_H
