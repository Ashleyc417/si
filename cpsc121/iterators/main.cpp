#include <iostream>
#include <vector>
#include <string>

// printWords is a function that will print every word in a vector
void printWords(std::vector<std::string> words) {
    // TODO: Using an iterator named "it", print all of the words in the "words"



}



// wordExists is a function that checks if a target word exists in the vector of words
bool wordExists(std::vector<std::string> words, std::string target) {
    // TODO: Fill in the function logic using iterators to return true if the target is 
    // found and false otherwise.



    return false; // Target not found
}




int main() {
    std::vector<std::string> words = {"Learning", "to", "use", "iterators", "in", "C++", "is", "fun"};

    std::cout << "Printing every second word:\n";
    printWords(words);

    std::cout << "\nChecking if certain words exist:\n";
    if (wordExists(words, "iterators")) {
        std::cout << "The word 'iterators' exists in the list." << std::endl;
    } else {
        std::cout << "The word 'iterators' does not exist in the list." << std::endl;
    }

    if (wordExists(words, "hello")) {
        std::cout << "The word 'hello' exists in the list." << std::endl;
    } else {
        std::cout << "The word 'hello' does not exist in the list." << std::endl;
    }

    return 0;
}
