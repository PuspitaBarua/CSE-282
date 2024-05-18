/* Write a C++ program to find the traversal of the following graphs (Figure
1). */
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
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];

// BFS function
vector<int> Bfs(int source) {
    vector<int> bfs;
    queue<int> q;
    visited[source] = 1;
    q.push(source);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node]) {
            int next_node = it;
            if (visited[next_node])
                continue;
            visited[next_node] = 1;
            q.push(next_node);
        }
    }
    return bfs;
}

int main() {
    int n;
    cout << "Number of graphs: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Graph no " << i << " : " << endl;
        int nodes, edges, u, v;
        vector<int> bfs;
        cout << "Enter the number of nodes: ";
        cin >> nodes;

        cout << "Enter the number of edges: ";
        cin >> edges;

        cout << "Enter the edge connections:" << endl;
        for (int i = 0; i < edges; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // Assuming an undirected graph
        }

        int source;
        cout << "Enter the Source node: ";
        cin >> source;
        // Reset visited array for each BFS
        memset(visited, 0, sizeof(visited));

        bfs = Bfs(source);

        cout << "Graph elements: ";
        for (auto it : bfs) {
            cout << it << " ";
        }
        cout << endl;

        // Clear the adjacency list for the next graph
        for (int j = 1; j <= nodes; j++) {
            adj[j].clear();
        }
    }
    return 0;
}
