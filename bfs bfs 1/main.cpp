#include <bits/stdc++.h>

using namespace std;

vector<int>G[100];

void bfs(int source,int destination)
{
    queue<int>q;
    int level[100] = {0},visited[100] = {0},parent[100];

    level[source] = 0;
    visited[source]= 0;
    q.push(source);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i =0;i<(int)G[u].size();i++)
        {
            int v = G[u][i];

            if(!visited[v])
            {
               level[v] = level[u]+1;
               visited[v] = 1;
               parent[v] = u;
               q.push(v);
            }
        }
    }
    printf("distance between %d and %d is %d",source,destination,level[destination]);
}

int main()
{
    int node,source,destination,edge,a,b;

    cout<<"enter the number of nodes and edges : ";
    cin>>node>>edge;

    cout<<"enter the nodes ";
    while(edge--)
    {
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    cout<<"enter the source and destination : ";
    cin>>source>>destination;

    bfs(source,destination);

    return 0;
}
