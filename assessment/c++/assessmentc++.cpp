#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a class to represent lecture details
class Lecture {
public:
    // Constructor to initialize data members
    Lecture(string name, string subject, string course, int num_lectures) {
        lecturer_name = name;
        subject_name = subject;
        course_name = course;
        num_of_lectures = num_lectures;
    }

    // Function to add a new lecture detail
    void add_lecture(string name, string subject, string course, int num_lectures) {
        lecturer_name = name;
        subject_name = subject;
        course_name = course;
        num_of_lectures = num_lectures;
    }

    // Function to display name and lecture details
    void display_details() {
        cout << "Lecturer Name: " << lecturer_name << endl;
        cout << "Subject Name: " << subject_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Number of Lectures: " << num_of_lectures << endl;
    }

private:
    // Data members
    string lecturer_name;
    string subject_name;
    string course_name;
    int num_of_lectures;
};

int main() 

{ int i;
	
    // Create an empty vector to store lecture details
    vector<Lecture> lectures;

    // Add five lectures to the vector
    
    lectures.push_back(Lecture("shyam", "English Literature", "Shakespeare", 20));
    lectures.push_back(Lecture("darsh", "History", "chhatrpati sivaji maharaj", 25));
    lectures.push_back(Lecture("rachit", "Biology", "Genetics", 35));
    lectures.push_back(Lecture("kishan", "Chemistry", "Organic Chemistry", 40));
    lectures.push_back(Lecture("kelvin", "Computer Science", "Data Structures", 30));
    

    // Display the details of all lectures in the vector
    for (int i = 0; i <=lectures.size(); i++) {
        cout << "Lecture " << i+1 << ":\n";
        lectures[i].display_details();
        cout << endl;
    }

    return 0;
}

