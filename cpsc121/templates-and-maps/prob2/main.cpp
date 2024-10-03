#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> playerScores;

    // Add players and their scores here

    // Loop through the map and print each player's name and score
    for (const auto &player : playerScores)
    {
        cout << player.first << ": " << player.second << endl;
    }

    return 0;
}