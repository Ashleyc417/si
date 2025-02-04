#include <iostream>

// Prompt: Write a program to determine how far a number is from 10.
//Details: Accept the number as an integer input from the user and print the answer to stdout (std::cout).

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int distance = std::abs(num - 10);  // Absolute difference
    std::cout << "Distance from 10: " << distance << std::endl;

    return 0;
}
