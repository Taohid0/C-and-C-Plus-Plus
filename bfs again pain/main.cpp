#include <bits/stdc++.h>

using namespace std;

const int infinity = 100000000;
int d[100];

vector<int>graph[100],cost[100];

int bfs(int source,int destination)
{
    for(int i = 0;i<100;i++)
    {
        d[i] = infinity;
    }
    queue<int>q;
    int visited[100] = {0};
    int level[100] = {0};
    q.push(source);
    d[source] = 0;
    visited[source] = 1;
    level[source] = 0;
    while(!q.empty())
    {
        int u= q.front();
        q.pop();

        for(int i= 0;i<(int)graph[u].size();i++)
        {
            int v  = graph[u][i];

            if(d[v]>d[u]+cost[u][v])
            {
                d[v] = d[u]+cost[u][v];
                q.push(v);
            }
        }
    }
    return d[destination-1];
}

int main()
{
    int node,edge,a,b,source,destination,cst;

    cout<<"enter the number of nodes and edges : ";
    cin>>node>>edge;

    cout<<"enter the edges and cost ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;
        graph[a].push_back(b);
        graph[b].push_back(a);
        cost[a].push_back(cst);
        cost[b].push_back(cst);
    }
    cout<<"enter source and destination ";
    cin>>source>>destination;

    int result = bfs(source,destination);

    cout<<"the shortest path is "<<result;

    return 0;
}
