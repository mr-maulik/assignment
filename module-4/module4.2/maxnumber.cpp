#include <iostream>
using namespace std;

// Class definition
class MaxNumber {
    private:
        int num1, num2;

    public:
        MaxNumber(int n1, int n2) { // Constructor
            num1 = n1;
            num2 = n2;
        }

        friend int findMax(MaxNumber); // Friend function declaration
};

// Friend function definition
int findMax(MaxNumber obj) {
    if (obj.num1 > obj.num2) {
        return obj.num1;
    } else {
        return obj.num2;
    }
}

// Main function
int main() {
    MaxNumber numbers(5, 10); // Object creation
    int maxNum = findMax(numbers); // Friend function call
    cout << "The maximum number is: " << maxNum << endl;
    return 0;
}
