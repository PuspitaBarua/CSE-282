/* Finding the shortest distance from the source to all the nodes. */
/*
node 4 edge 4
1 2
1 4
3 4
2 4
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int visited[100], dis[100];

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
            dis[nxt_node] = 1 + dis[node];
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
   for (i = 1; i <= n; ++i)
    {
        cout << "Distance " << source << " to " << i << " = " << dis[i]<< endl;
    }
}

