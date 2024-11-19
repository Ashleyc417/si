#include <iostream>
#include <vector>
#include <string>


// Given a list of strings, findMostFrequentChar will return the most frequently used character across all strings.
// If there is a tie, return the lexicographically smallest character.
char findMostFrequentChar(const std::vector<std::string>& strings) {
  // TODO: Fill in the function body
    


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
