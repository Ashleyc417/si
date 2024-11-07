#include <iostream>
#include <vector>
#include <string>

// printWords is a function that will print every word in a vector
void printWords(std::vector<std::string> words) {
  // TODO: Using an iterator named "it", print all of the words in the "words"

  for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); it++) {
    // Dereference the iterator it to print out the actual value
    std::cout << *it << std::endl;
  }

}



// wordExists is a function that checks if a target word exists in the vector of words
bool wordExists(std::vector<std::string> words, std::string target) {
  // TODO: Fill in the function logic using iterators to return true if the target is 
  // found and false otherwise.

  // Create an iterator to store each element in the words vector
  std::vector<std::string>::iterator it;

  for (it = words.begin(); it != words.end(); it++) {
    // Check if the current element is the target
    if (*it == target) {
      return true;
    }
  }

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
