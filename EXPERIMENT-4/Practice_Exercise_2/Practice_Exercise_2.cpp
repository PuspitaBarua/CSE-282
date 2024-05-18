//2. Take 6 integer values (0 to 5) into a stack and then find the factorial of each stack element. Store the outputs in another stack. Print the output in the
//following way:
//Factorial : 0 = 1
//Factorial : 1 = 1
//Factorial : 2 = 4

#include <iostream>
#include <stack>

using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    stack<int> inputStack;
    stack<int> outputStack;

    // Push 6 integer values (0 to 5) into the stack
    cout << "Enter 6 integer values (0 to 5):" << endl;
    for (int i = 0; i < 6; ++i) {
        int value;
        cin >> value;
        inputStack.push(value);
    }

    // Calculate factorial of each element and store in another stack
    while (!inputStack.empty()) {
        int num = inputStack.top();
        inputStack.pop();
        outputStack.push(factorial(num));
    }

    // Print the output
    int i = 0;
    while (!outputStack.empty()) {
        cout << "Factorial : " << i << " = " << outputStack.top() << endl;
        outputStack.pop();
        ++i;
    }

    return 0;
}
