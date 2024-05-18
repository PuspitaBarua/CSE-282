//Example 2: Breadth First Search (BFS) Traversal.

#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int visited[100];

vector<int>Bfs(int source)
{
    vector<int>bfs;
    queue<int>q;
    visited[source] =1;
    q.push(source);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node])
        {
            int nxt_node = it;
            if(visited[nxt_node]) continue;
            visited [nxt_node] = 1;
            q.push(nxt_node);
        }
    }
    return bfs;
}
int main()
{
    int i,j,k;
    int n,e;
    vector<int>bfs;
    cout<<"No. of Nodes: ";
    cin>>n;
    cout<<"No. of Edges: ";
    cin>>e;
    cout<<"Enter the edges connections: "<<endl;

    for(i=0;i<e;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout<<"Enter the source node: "<<endl;
    cin>>source;
    bfs = Bfs(source);
    for(auto it: bfs)
    {
        cout<<it<<" ";

    }
}
