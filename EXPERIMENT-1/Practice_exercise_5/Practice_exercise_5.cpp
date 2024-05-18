//5. Write a C++ program to subtract two complex numbers.

#include <iostream>

using namespace std;

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to subtract two complex numbers
Complex subtractComplex(const Complex& c1, const Complex& c2) {
    Complex result;

    // Subtract corresponding components
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;

    return result;
}

int main() {
    // Declare two Complex variables
    Complex complex1, complex2;

    // Input the first complex number
    cout << "Enter Complex Number 1:" << endl;
    cout << "Real part: ";
    cin >> complex1.real;
    cout << "Imaginary part: ";
    cin >> complex1.imaginary;

    // Input the second complex number
    cout << "Enter Complex Number 2:" << endl;
    cout << "Real part: ";
    cin >> complex2.real;
    cout << "Imaginary part: ";
    cin >> complex2.imaginary;

    // Subtract the complex numbers
    Complex difference = subtractComplex(complex1, complex2);

    // Display the result
    cout << "Result of Subtraction:" << endl;
    cout << "Real part: " << difference.real << endl;
    cout << "Imaginary part: " << difference.imaginary;

    return 0;
}

