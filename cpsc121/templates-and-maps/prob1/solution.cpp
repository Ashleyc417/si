#include <iostream>
template <typename T>

T findMax(T a, T b) {
    // Compare a & b
    // Then return the larger value
    if (a > b) {
        return a;
    }
    return b;
}



int main() {
    std::cout << "findMax(5, 10) = " << findMax(5, 10) << std::endl;             // Test with integers
    std::cout << "findMax(3.14, 1.59) = " << findMax(3.14, 1.59) << std::endl;   // Test with doubles
    std::cout << "findMax(a, b) = " << findMax('a', 'b') << std::endl;           // Test with characters
    return 0;
} 

