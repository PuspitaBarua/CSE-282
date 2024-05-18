//1. Write a C++ program to store and print the roll no., name, age, and marks of a student using structures.

#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a student
struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

int main() {
    // Declare a variable of type Student
    Student student;

    // Input information from the user
    cout << "Enter Roll No.: ";
    cin >> student.rollNo;

    cout << "Enter Name: "<<endl;
      // Ignore the newline character left in the buffer
    getline(cin, student.name);

    cout << "Enter Age: ";
    cin >> student.age;

    cout << "Enter Marks: ";
    cin >> student.marks;

    // Display the information
    cout << "\nStudent Information:" << endl;
    cout << "Roll No.: " << student.rollNo << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}

