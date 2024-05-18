//Example 3: Queue in C++.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(8);
    q.push(45);
    q.push(60);
    q.push(80);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
}
