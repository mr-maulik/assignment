#include <iostream>

// Inline function to calculate the multiplication of two numbers
inline int multiply(int x, int y) {
    return x * y;
}

// Inline function to calculate the cubic value of a number
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Call the multiply inline function and print the result
    std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;

    // Call the cubic inline function and print the result
    std::cout << num1 << "^3 = " << cubic(num1) << std::endl;
    std::cout << num2 << "^3 = " << cubic(num2) << std::endl;

    return 0;
}
