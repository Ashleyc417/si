#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>   // For std::find

// ---------------------------------------------------------------------------------------------------------
// TASK 1: Complete displayAndCountWords
// ---------------------------------------------------------------------------------------------------------
void displayAndCountWord(std::vector<std::string> words, std::string target) {
  // TODO: Use an iterator to display each word in the vector.
  // TODO: Count how many times the "target" word appears in the vector and display the count.
  // Add your code below

  // Keep track of count
  int count = 0;
  std::cout << "Words in the vector: ";

  // Go through vector using an iterator
  for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); it++) {
      std::cout << *it << " ";
      
      // If the iterator is pointing to "dream", add to the count
      if (*it == target) {
          ++count;
      }
  }
  std::cout << "\nThe word " << target << " appears " << count << " time(s)." << std::endl;

}

// ---------------------------------------------------------------------------------------------------------
// TASK 2: Complete findAndDisplayMapKeys
// ---------------------------------------------------------------------------------------------------------
void findAndDisplayMapKeys(std::map<std::string, int> wordCount, int threshold) {
  // TODO: Use an iterator to find and display all keys in the map that have a value greater than the threshold.
  // TODO: Only display keys that meet the threshold condition to reinforce iterator comparison logic.
  // Add your code below

  std::cout << "\nWords with frequency greater than " << threshold << ":\n";

  for (std::map<std::string, int>::iterator it = wordCount.begin(); it != wordCount.end(); ++it) {
      // If the value is greater than the threshold, print the key and value
      if (it->second > threshold) {
          std::cout << it->first << ": " << it->second << std::endl;
      }
  }

}

// ---------------------------------------------------------------------------------------------------------
// TASK 3: Complete replaceOrInsertValue
// ---------------------------------------------------------------------------------------------------------
void replaceOrInsertValue(std::vector<int> numbers, int targetValue, int newValue) {
    // TODO: Use std::find to locate the targetValue in the vector.
    // TODO: If found, replace targetValue with newValue using erase and insert.
    // TODO: If not found, insert newValue at the beginning of the vector.
    // Add your code below
    std::vector<int>::iterator it = std::find(numbers.begin(), numbers.end(), targetValue);
    
    if (it != numbers.end()) {
        // Target found; replace it with newValue
        numbers.erase(it);
        numbers.insert(it, newValue);
    } 
    else {
        // Target not found; insert newValue at the beginning
        numbers.insert(numbers.begin(), newValue);
    }

}




int main() {
    // Test vector function
    std::vector<std::string> lyrics = {"I", "just", "woke", "up", "from", "a", "dream", "and", "I", "feel", "alive"};
    displayAndCountWord(lyrics, "dream");

    // Test map function
    std::map<std::string, int> wordFrequency = {{"I", 2}, {"just", 1}, {"woke", 1}, {"up", 1}, {"dream", 1}};
    findAndDisplayMapKeys(wordFrequency, 1);

    // Test iterator parameter function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    replaceOrInsertValue(numbers, 3, 10);
    
    // Display modified vector
    std::cout << "\nModified vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}



