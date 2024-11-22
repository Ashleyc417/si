#include <iostream>

int calculateLength(const std::str, int index = 0) {
  // Base Case: Index reaches end of string
  if (index == str.size()) {
    return 0;
  }
  // Recursive Case: Add 1 to that index & keep going
  return 1 + calculateLength(str, index + 1);
}
