#include <iostream>
using namespace std;

// Function to add two numbers
int math_operation(int num1, int num2) {
    return num1 + num2;
}

// Function to add three numbers
int math_operation(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

// Function to subtract two numbers
int math_operation(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double math_operation(double num1, int num2) {
    return num1 * num2;
}

// Function to divide two numbers
double math_operation(int num1, double num2) {
    return num1 / num2;
}

int main() {
    // Testing the math_operation functions
    int num1 = 10, num2 = 20, num3 = 30;
    double num4 = 15.5, num5 = 2.0;

    cout << "Addition of " << num1 << " and " << num2 << " is " << math_operation(num1, num2) << endl;
    cout << "Addition of " << num1 << ", " << num2 << ", and " << num3 << " is " << math_operation(num1, num2, num3) << endl;
    cout << "Subtraction of " << num4 << " and " << num5 << " is " << math_operation(num4, num5) << endl;
    cout << "Multiplication of " << num4 << " and " << num2 << " is " << math_operation(num4, num2) << endl;
    cout << "Division of " << num1 << " and " << num5 << " is " << math_operation(num1, num5) << endl;

    return 0;
}
