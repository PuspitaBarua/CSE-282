//3. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks, and phy_marks and then display the percentage of each student.

#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent marks of a student
struct Marks {
    int rollNo;
    string name;
    int chemMarks;
    int mathsMarks;
    int phyMarks;
    float percentage;
};

int main() {
    const int numStudents = 5;
    Marks students[numStudents];

    // Input information and marks for 5 students
    for (int i = 0; i < numStudents; ++i) {
        students[i].rollNo = i + 1;

        cout << "Enter name for student " << students[i].rollNo << ": ";
        cin.ignore();  // Ignore the newline character left in the buffer
        getline(cin, students[i].name);

        cout << "Enter Chemistry marks for student " << students[i].rollNo << ": ";
        cin >> students[i].chemMarks;

        cout << "Enter Mathematics marks for student " << students[i].rollNo << ": ";
        cin >> students[i].mathsMarks;

        cout << "Enter Physics marks for student " << students[i].rollNo << ": ";
        cin >> students[i].phyMarks;

        // Calculate percentage
        students[i].percentage = (students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks) / 3.0;
    }

    // Display details and percentage for each student
    cout << "\nStudent Details and Percentage:";
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nDetails of student with Roll No. " << students[i].rollNo << ":" << endl;
        cout << "Name:" << students[i].name << endl;
        cout << "Chemistry Marks: " << students[i].chemMarks << endl;
        cout << "Mathematics Marks: " << students[i].mathsMarks << endl;
        cout << "Physics Marks: " << students[i].phyMarks << endl;
        cout << "Percentage: " << students[i].percentage << "%";
    }

    return 0;
}

