/* Write a C++ program to Represent the following graphs using an adjacency
matrix (figure 1) */
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
    for(int t=1; t<=n;t++)
    {
        cout<<"Graph"<<t<<":"<<endl;

    int nodes, edges, u, v;
    cout << "Enter Number of Nodes: ";
    cin >> nodes;
    cout << "Enter Number of Edges: ";
    cin >> edges;

    vector<vector<int>> adjacencyMatrix(nodes, vector<int>(nodes, 0));

    // Input edges and create the adjacency matrix
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1; // Assuming an undirected graph
    }

    // Display the adjacency matrix of the graph
    cout << "Adjacency Matrix of the Graph: " << endl;
    for (int j = 0; j < nodes; j++) {
            cout<<j<<"-->";
        for (int k = 0; k < nodes; k++) {
            cout << adjacencyMatrix[j][k] << " ";
        }
        cout << endl;
    }
    }
    return 0;
}
