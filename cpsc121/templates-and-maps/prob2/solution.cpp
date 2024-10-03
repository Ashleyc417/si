#include <iostream>
#include <map>

int main() {
    // TODO: Create a map called `playerScores`
    std::map<std::string, int> playerScores;

    // TODO: Add players and their initial scores
    playerScores.insert({"Alice", 50});
    playerScores.insert({"Bob", 75});
    playerScores.insert({"Charlie", 60});


    // TODO: Manipulate scores
    // 
    // Could use:
    // playerScores["Alice"] += 10;   // Alice wins a round
    // playerScores["Bob"] -= 20;     // Bob loses a round
    // playerScores["Charlie"] += 15; // Charlie completes a bonus level
    //
    // or
    playerScores.at("Alice") += 10;
    playerScores.at("Bob") -= 20;
    playerScores.at("Charlie") += 15;

    // TODO: Go through map and display updated scores
    for (const auto &player : playerScores) {
        std::cout << player.first << ": " << player.second << std::endl;
    }

    // TODO: Use .size() to display the number of players
    std::cout << "Number of players: " << playerScores.size() << std::endl;

    // TODO: Use .empty() to check if the map is empty before clearing
    //
    // Could use:
    // std::cout << "Is the map empty? " << (playerScores.empty() ? "Yes" : "No") << std::endl;
    //
    // or
    std::cout << "Is the map empty? ";
    if (playerScores.empty()) {
        std::cout << "Yes" << std::endl;;
    }
    else {
        std::cout << "No" << std::endl;
    }

    // TODO: Use .clear() to remove all players and then display that the game is over.
    playerScores.clear();
    std::cout << "The game is over." << std::endl;

    // TODO: Use .empty() again to confirm the map is empty after clearing
    //
    // Could use:
    // std::cout << "Is the map empty now? " << (playerScores.empty() ? "Yes" : "No") << endl;
    //
    // or
    std::cout << "Is the map empty now? ";
    if (playerScores.empty()) {
        std::cout << "Yes" << std::endl;;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}