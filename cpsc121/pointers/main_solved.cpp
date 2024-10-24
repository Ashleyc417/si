#include <iostream>

// TODO: Part 2 - Write a function that swaps two values using pointers.
void swapValues(int *ptr1, int *ptr2) {
  // TODO: Implement swap logic using pointers.
 
  int tmp = *ptr1;

  *ptr1 = *ptr2;
  *ptr2 = tmp;
}

int main() {

  // Test for Part 1
  int a = 10;
  int *p = &a;

  // TODO: Part 1 - Use the pointer `p` to change the value of 'a' to 20.
  *p = 20;

  if (a == 20) {
    std::cout << "Test 1 passed!" << std::endl;
  } else {
    std::cout << "Test 1 failed!" << std::endl;
  }

  // Test for Part 2
  int x = 15, y = 25;

  // TODO: Call swapValues() and pass the addresses of x and y
  swapValues(&x, &y);

  if (x == 25 && y == 15) {
    std::cout << "Test 2 passed!" << std::endl;
  } else {
    std::cout << "Test 2 failed!" << std::endl;
  }

  // Test for Part 3
  int **pp = &p;

  // TODO: Part 3 - Use `pp` to change the value of 'a' to 30.
  **pp = 30;

  if (a == 30) {
    std::cout << "Test 3 passed!" << std::endl;
  } else {
    std::cout << "Test 3 failed!" << std::endl;
  }

  return 0;
}
