#oinclude <iostream>
using namespace std;

class Arithmetic {
    public:
        int num1, num2;
        
        // Constructor to initialize values of num1 and num2
        Arithmetic(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        // Method to add two numbers
        int add() {
            return num1 + num2;
        }

        // Method to subtract two numbers
        int subtract() {
            return num1 - num2;
        }

        // Method to multiply two numbers
        int multiply() {
            return num1 * num2;
        }

        // Method to divide two numbers
        float divide() {
            if(num2 == 0) {
                cout << "Cannot divide by zero!";
                return 0;
            } else {
                return (float) num1 / num2;
            }
        }
};

int main() {
    // Create an object of the Arithmetic class and pass values to the constructor
    Arithmetic arith(10, 5);

    // Call the methods of the Arithmetic class and print the results
    cout << "Addition: " << arith.add() << endl;
    cout << "Subtraction: " << arith.subtract() << endl;
    cout << "Multiplication: " << arith.multiply() << endl;
    cout << "Division: " << arith.divide() << endl;

    return 0;
}
