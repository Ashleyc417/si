#include <iostream>

// Function to calculate the nth Fibonacci number using recursion
// This function returns the nth Fibonacci number.
// The base cases are:
//   fibonacci(0) = 0
//   fibonacci(1) = 1
// The recursive case returns fibonacci(n-1) + fibonacci(n-2)
int fibonacci(int n) {
    // TODO: Fill in the function logic
    // (Hint: There are two base cases in this problem.) 


}


int main() {
    // Test cases for the fibonacci function
    int num1 = 5;
    int num2 = 7;
    int num3 = 10;

    std::cout << "Fibonacci of " << num1 << " is: " << fibonacci(num1) << std::endl;  // Expected: 5
    std::cout << "Fibonacci of " << num2 << " is: " << fibonacci(num2) << std::endl;  // Expected: 13
    std::cout << "Fibonacci of " << num3 << " is: " << fibonacci(num3) << std::endl;  // Expected: 55

    return 0;
}
