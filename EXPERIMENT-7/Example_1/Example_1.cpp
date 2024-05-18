#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Inputting Format
4 4 nodes edges
0 1
0 2
0 3
1 2
*/
int main(){
vector<int>graph[5]; // initialize a vector of array
int nodes, edge, u, v;
cout<<"Enter Number of Nodes: ";
cin>>nodes;
cout<<"Enter Number of Edges: ";
cin>>edge;
for (int i = 0;i<edge;i++){
cin>>u>>v; // take input the edges connection
graph[u].push_back(v);
graph[v].push_back(u);
}
cout<<"Adjacency List of the Graph: "<<endl;
for (int j = 0; j<nodes; j++){
cout<<j<<" --> ";
for(auto it: graph[j]){
cout<<it<<" ";
}
cout<<endl;
}
}
