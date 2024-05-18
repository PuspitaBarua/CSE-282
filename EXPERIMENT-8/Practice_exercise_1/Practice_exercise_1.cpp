/* Find the shortest distance from an arbitrary source to all the nodes. */
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
int visited[100], dis[100];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    dis[source] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                dis[it] = 1 + dis[node];
                visited[it] = 1;
                q.push(it);
            }
        }
    }
}
int main()
{
    int node, edge,n;
    cout << "Enter the number graph: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Graph: "<<i<<endl;
    cout << "Enter the number of node: ";
    cin >> node;
    cout << "Enter the number of edge: ";
    cin >> edge;
    cout << "Enter the edge connections: " << endl;
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout << "Enter the source node : ";
    cin >> source;
    bfs(source);
    for (int i = 0; i <= node; i++)
    {
        cout << "Distance from " << source << " to " << i << " is : " << dis[i] << endl;
    }
    }
    return 0;
}
