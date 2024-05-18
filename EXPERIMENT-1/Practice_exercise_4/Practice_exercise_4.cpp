//4. Write a C++ program to add two distances in inch-feet using structure.

#include <iostream>

using namespace std;

// Define a structure to represent distance in inch-feet
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
Distance addDistances(const Distance& d1, const Distance& d2) {
    Distance result;

    // Add inches
    result.inches = d1.inches + d2.inches;

    // If the sum of inches is 12 or more, adjust feet and inches
    if (result.inches >= 12) {
        result.feet = d1.feet + d2.feet + result.inches / 12;
        result.inches %= 12;
    } else {
        // If sum of inches is less than 12, just add feet
        result.feet = d1.feet + d2.feet;
    }

    return result;
}

int main() {
    // Declare two Distance variables
    Distance distance1, distance2;

    // Input the first distance
    cout << "Enter Distance 1:" << endl;
    cout << "Feet: ";
    cin >> distance1.feet;
    cout << "Inches: ";
    cin >> distance1.inches;

    // Input the second distance
    cout << "Enter Distance 2:" << endl;
    cout << "Feet: ";
    cin >> distance2.feet;
    cout << "Inches: ";
    cin >> distance2.inches;

    // Add the distances
    Distance sum = addDistances(distance1, distance2);

    // Display the result
    cout << "Sum of Distances:";
    cout << "Feet: " << sum.feet << endl;
    cout << "Inches: " << sum.inches;

    return 0;
}
