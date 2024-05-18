//Example 2: Stack in C++.

#include<bits/stdc++.h>
using namespace std;
// Stack Container in C++
int main() {
stack<int>mystack; // variable declaration
mystack.push(42); // push operation
mystack.push(11);
mystack.push(5);
mystack.push(71);
mystack.push(43);
while(!mystack.empty()){
cout<<mystack.top()<<" ";
mystack.pop(); // pop operation
}
}
