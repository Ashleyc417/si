# Problem 1: Factorial

**Problem:**  
Write a recursive function `factorial` that calculates the factorial of a given integer `n`.

**Description:**  
The factorial of a number `n` (denoted `n!`) is the product of all positive integers less than or equal to `n`.  
For example:  
- `factorial(5) = 5 * 4 * 3 * 2 * 1 = 120`
- `factorial(0) = 1` (base case)

**Example Test Case:**
```cpp
int result = factorial(5);  
std::cout << result << std::endl;  // Output: 120
```

**Steps to Implement:**
1. Define the recursive function `factorial`.
2. Use the base case `factorial(0) = 1`.
3. For the recursive case, return `n * factorial(n - 1)`.

