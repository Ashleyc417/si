# Sum of Digits

Write a recursive function that calculates the sum of the digits of a given integer `n`.


## Objective:
The function should recursively break down the number by extracting the last digit and adding it to the sum of the remaining digits.

For example:
- `sumOfDigits(123) = 1 + 2 + 3 = 6`
- `sumOfDigits(456) = 4 + 5 + 6 = 15`


## Test Case:

int result = sumOfDigits(123);  
std::cout << result << std::endl;  // Output: 6
