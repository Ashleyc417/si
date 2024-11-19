#include <iostream>

// Function to calculate factorial using recursion
// This function calculates the factorial of a number n
// If n is 0, it returns 1 (base case).
// Otherwise, it returns n * factorial(n - 1).
int factorial(int n) {
    // TODO: Fill in the function logic
    // (Hint: Remember in recursion you need a 
    //   1. base case and a 
    //   2. recursive case)


}


int main() {
    // Test cases for the factorial function
    int num1 = 5;
    int num2 = 3;
    int num3 = 0;

    std::cout << "Factorial of " << num1 << " is: " << factorial(num1) << std::endl;  // Expected: 120
    std::cout << "Factorial of " << num2 << " is: " << factorial(num2) << std::endl;  // Expected: 6
    std::cout << "Factorial of " << num3 << " is: " << factorial(num3) << std::endl;  // Expected: 1

    return 0;
}
