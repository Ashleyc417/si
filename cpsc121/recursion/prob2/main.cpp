#include <iostream>

// Function to calculate the sum of digits of a number using recursion
// This function calculates the sum of digits of the number n.
// The base case is when n is 0, in which case it returns 0.
// The recursive case returns the last digit of n (n % 10) + sumOfDigits of the remaining digits (n / 10).
int sumOfDigits(int n) {
    // TODO: Fill in the function logic
    // (Hint: Remember in recursion you need a 
    //   1. base case and a 
    //   2. recursive case)


}


int main() {
    // Test cases for the sum of digits function
    int num1 = 123;
    int num2 = 456;
    int num3 = 0;

    std::cout << "Sum of digits of " << num1 << " is: " << sumOfDigits(num1) << std::endl;  // Expected: 6
    std::cout << "Sum of digits of " << num2 << " is: " << sumOfDigits(num2) << std::endl;  // Expected: 15
    std::cout << "Sum of digits of " << num3 << " is: " << sumOfDigits(num3) << std::endl;  // Expected: 0

    return 0;
}
