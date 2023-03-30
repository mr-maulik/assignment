#include <iostream>
using namespace std;

// Define Calculator class
class Calculator {
  private:
    float num1, num2; // private variables for two input numbers
    
  public:
    // public member functions to get input numbers
    void getNumbers() {
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
    }

    // public member function to perform addition
    void add() {
      cout << "Sum = " << num1 + num2 << endl;
    }

    // public member function to perform subtraction
    void subtract() {
      cout << "Difference = " << num1 - num2 << endl;
    }

    // public member function to perform multiplication
    void multiply() {
      cout << "Product = " << num1 * num2 << endl;
    }

    // public member function to perform division
    void divide() {
      if (num2 != 0)
        cout << "Quotient = " << num1 / num2 << endl;
      else
        cout << "Cannot divide by zero!" << endl;
    }
};

// main function
int main() {
  Calculator calc; // create an object of Calculator class
  
  // display menu options and get user's choice
  int choice;
  cout << "Calculator Menu:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "Enter your choice (1-4): ";
  cin >> choice;
  
  // perform selected operation based on user's choice
  switch (choice) {
    case 1:
      calc.getNumbers();
      calc.add();
      break;
    case 2:
      calc.getNumbers();
      calc.subtract();
      break;
    case 3:
      calc.getNumbers();
      calc.multiply();
      break;
    case 4:
      calc.getNumbers();
      calc.divide();
      break;
    default:
      cout << "Invalid choice!" << endl;
      break;
  }
  
  return 0; // exit program
}
