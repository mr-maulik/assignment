#include<iostream>
using namespace std;

// Base class for storing roll number of students
class Students {
protected:
  int roll_number;
public:
  void set_roll_number(int r) {
    roll_number = r;
  }
  void display_roll_number() {
    cout << "Roll Number: " << roll_number << endl;
  }
};

// Derived class from Students for storing marks obtained in two subjects
class Test : public Students {
protected:
  int subject1_marks;
  int subject2_marks;
public:
  void set_marks(int m1, int m2) {
    subject1_marks = m1;
    subject2_marks = m2;
  }
  void display_marks() {
    cout << "Marks obtained in Subject 1: " << subject1_marks << endl;
    cout << "Marks obtained in Subject 2: " << subject2_marks << endl;
  }
};

// Derived class from Test for storing total marks obtained in the test
class Result : public Test {
  int total_marks;
public:
  void calculate_total() {
    total_marks = subject1_marks + subject2_marks;
  }
  void display_total() {
    cout << "Total Marks Obtained: " << total_marks << endl;
  }
};

int main() {
  Result student1; // creating object of Result class
  student1.set_roll_number(101); // setting roll number of the student
  student1.set_marks(80, 90); // setting marks obtained in two subjects
  student1.calculate_total(); // calculating total marks obtained in the test
  student1.display_roll_number(); // displaying roll number of the student
  student1.display_marks(); // displaying marks obtained in two subjects
  student1.display_total(); // displaying total marks obtained in the test
  return 0;
}
