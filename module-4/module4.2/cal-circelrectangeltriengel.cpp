#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
float area(float length, float breadth) {
  return length * breadth;
}

// Function to calculate the area of a triangle
float area(float base, float height, float half = 0.5) {
  return half * base * height;
}

// Function to calculate the area of a circle
float area(float radius, float pi = 3.14159) {
  return pi * radius * radius;
}

int main() {
  float length, breadth, base, height, radius;

  cout << "Enter length and breadth of rectangle: ";
  cin >> length >> breadth;
  cout << "Area of rectangle is " << area(length, breadth) << endl;

  cout << "Enter base and height of triangle: ";
  cin >> base >> height;
  cout << "Area of triangle is " << area(base, height) << endl;

  cout << "Enter radius of circle: ";
  cin >> radius;
  cout << "Area of circle is " << area(radius) << endl;

  return 0;
}
