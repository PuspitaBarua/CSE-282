//1. Take 5 integer values into a stack. Find the summation of all the stack elements.

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Push 5 integer values into the stack
    cout << "Enter 5 integer values:" << endl;
    for (int i = 0; i < 5; ++i) {
        int value;
        cin >> value;
        myStack.push(value);
    }

    // Pop each element and add to the sum
    int sum = 0;
    while (!myStack.empty()) {
        sum += myStack.top();
        myStack.pop();
    }

    cout << "Sum of all elements in the stack: " << sum;

    return 0;
}
