/* Write a C++ program to Represent the following graphs using an adjacency
List (Figure 1). */
/*Graph a: nodes 8, edges 10
0 1
0 3
1 2
3 4
3 7
7 4
7 5
5 4
5 6
4 6

Graph b: nodes 9, edges 10
0 1
0 3
0 8
1 7
2 3
2 5
3 4
4 8
5 6
7 2
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<< "Number of the graph: ";
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        cout<<"Graph"<<i<<":"<<endl;
        int nodes, edges, u, v;
        cout << "Enter Number of Nodes: ";
        cin >> nodes;
        cout << "Enter Number of Edges: ";
        cin >> edges;

    vector<int> graph[nodes + 1]; // Assuming nodes are numbered from 0 to nodes-1

    cout << "Enter Edges:" << endl;
    for (int i = 0; i < edges; ++i) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Assuming an undirected graph
    }

    cout << "Adjacency List of the Graph:" << endl;
    for (int j = 0; j < nodes; ++j) {
        cout << j << " --> ";
        for (auto it : graph[j]) {
            cout << it << " ";
        }
        cout << endl;
    }
    }
    return 0;
}
