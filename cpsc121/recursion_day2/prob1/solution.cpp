#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

// Given a list of strings, findMostFrequentChar will return the most frequently used character across all strings.
// If there is a tie, return the lexicographically smallest character.
char findMostFrequentChar(const std::vector<std::string>& strings) {
    std::map<char, int> frequencyMap;

    // Count frequency of each character
    for (std::string word : strings) {
        for (char c : word) {
            // If the entry for that character doesn't exist [] will create one,
            // .at() will not be able to do this, so you would have to add another condition.
            frequencyMap[c]++;
        }
    }

    // Find the character with the highest frequency
    char mostFrequentChar = ' ';
    int maxFrequency = 0;
    for (std::pair<char, int> entry : frequencyMap) {
        if (entry.second > maxFrequency && entry.first < mostFrequentChar) {
            mostFrequentChar = entry.first;
            maxFrequency = entry.second;
        }
    }

    return mostFrequentChar;
}

int main() {
  // Test case 1
  std::vector<std::string> strings1 = {"apple", "banana", "apricot"};
  char result1 = findMostFrequentChar(strings1);
  std::cout << "Most frequent character in test case 1: " << result1 << " (expected: 'a')" << std::endl;

  // Test case 2
  std::vector<std::string> strings2 = {"xyz", "xxyyzz", "zyx"};
  char result2 = findMostFrequentChar(strings2);
  std::cout << "Most frequent character in test case 2: " << result2 << " (expected: 'x')" << std::endl;

  // Test case 3
  std::vector<std::string> strings3 = {"hello", "world", "leetcode"};
  char result3 = findMostFrequentChar(strings3);
  std::cout << "Most frequent character in test case 3: " << result3 << " (expected: 'l')" << std::endl;

  return 0;
}