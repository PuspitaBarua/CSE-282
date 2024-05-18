//2. Write a C++ program to store roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a student
struct Student {
    int rollNo;
    string name;
    int age;
};

int main() {
    const int numStudents = 5;
    Student students[numStudents];

    // Input information for 5 students
    for (int i = 0; i < numStudents; ++i) {
        students[i].rollNo = i + 1;

        cout << "Enter name for student " << students[i].rollNo << ": ";
        cin.ignore();  // Ignore the newline character left in the buffer
        getline(cin, students[i].name);

        cout << "Enter age for student " << students[i].rollNo << ": ";
        cin >> students[i].age;
    }

    // Print details of the student with roll number 2
    int targetRollNo = 2;
    bool found = false;

    for (int i = 0; i < numStudents; ++i) {
        if (students[i].rollNo == targetRollNo) {
            cout << "\nDetails of student with Roll No. " << targetRollNo << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent with Roll No. " << targetRollNo << " not found." << endl;
    }

    return 0;
}
