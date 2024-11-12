int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: fibonacci(0) = 0
    } else if (n == 1) {
        return 1;  // Base case: fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: sum of the two previous numbers
}
