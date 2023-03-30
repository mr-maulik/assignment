#include <iostream>
using namespace std;

class Number {
  private:
    int num;

  public:
    Number(int n = 0) {
      num = n;
    }

    void display() {
      cout << num << endl;
    }

    friend void swap(Number& num1, Number& num2);
};

void swap(Number& num1, Number& num2) {
  num1.num = num1.num + num2.num;
  num2.num = num1.num - num2.num;
  num1.num = num1.num - num2.num;
}

int main() {
  Number n1(10);
  Number n2(20);

  cout << "Before swapping:" << endl;
  n1.display(); // Output: 10
  n2.display(); // Output: 20

  swap(n1, n2);

  cout << "After swapping:" << endl;
  n1.display(); // Output: 20
  n2.display(); // Output: 10

  return 0;
}
