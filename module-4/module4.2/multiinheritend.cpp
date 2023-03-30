#include <iostream>
#include <string>

using namespace std;

// Define the base class "Person"
class Person {
public:
    string name;
    int age;

    // Constructor to initialize the name and age
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to read the data from user input
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display the data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derive the class "Student" from the base class "Person"
class Student : public Person {
public:
    float percentage;

    // Constructor to initialize the name, age, and percentage
    Student(string name, int age, float percentage) : Person(name, age) {
        this->percentage = percentage;
    }

    // Function to read the data from user input
    void readData() {
        Person::readData(); // Call the base class function to read name and age
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    // Function to display the data
    void displayData() {
        Person::displayData(); // Call the base class function to display name and age
        cout << "Percentage: " << percentage << endl;
    }
};

// Derive the class "Teacher" from the base class "Person"
class Teacher : public Person {
public:
    float salary;

    // Constructor to initialize the name, age, and salary
    Teacher(string name, int age, float salary) : Person(name, age) {
        this->salary = salary;
    }

    // Function to read the data from user input
    void readData() {
        Person::readData(); // Call the base class function to read name and age
        cout << "Enter salary: ";
        cin >> salary;
    }

    // Function to display the data
    void displayData() {
        Person::displayData(); // Call the base class function to display name and age
        cout << "Salary: " << salary << endl;
    }
};

// Define the main function
int main() {
    Student s("maulik", 20, 80.5);
    Teacher t("kishan", 35, 50000);

    // Call the readData function for each object
    s.readData();
    t.readData();

    // Call the displayData function for each object
    s.displayData();
    t.displayData();

    return 0;
}
