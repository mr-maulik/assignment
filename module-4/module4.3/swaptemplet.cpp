#include <iostream>

// Template function to swap two values of any data type
template<typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  // Swap two integer values
  int x = 5, y = 10;
  std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
  swap(x, y);
  std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

  // Swap two double values
  double a = 3.14, b = 2.71;
  std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
  swap(a, b);
  std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

  return 0;
}
