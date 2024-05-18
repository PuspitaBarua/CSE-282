//Example 2: Finding the shortest path from a source to the destination node.

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> path;
int parent[100], dis[100], visited[100];
void shortest_path(int d)
{
    if (d != -1)
    {
        int p = parent[d];
        path.push_back(d);
        shortest_path(p); // recursion
    }
}
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    parent[source] = -1;
    dis[source] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (auto it : adj[node])
        {

            if (!visited[it])
            {
                dis[it] = 1 + dis[node];
                visited[it] = 1;
                parent[it] = node;
                q.push(it);
            }
        }
    }
}
int main()
{
    int i, j, k;
    int n, m;
    cout << "No.of Nodes: " << endl;
    cin >> n;
    cout << "No.of Edges: " << endl;
    cin >> m;
    cout << "Enter the edge connections: " << endl;
    for (i = 0; i < m; ++i)
    {
        int u, v; // edge inputs
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source, dest;
    cout << "Enter the Source Node: ";
    cin >> source;
    cout << "Enter the Destination Node:";
    cin >> dest;
    bfs(source);
    cout << "Shortest Distance from " << source << " to " << dest << " = " << dis[dest] << endl;
    cout << "Shortest Path is: ";
    shortest_path(dest);
    reverse(path.begin(), path.end());
    for (auto it : path)
    {
        cout << it << " ";
    }
}
