#include <bits/stdc++.h>

using namespace std;
vector<int>graph[100];

int bfs(int src,int destination)
{
    int u,v,level[100] = {0},visited[100] = {0};
    queue<int>q;

    q.push(src);
    visited[src] = 0;
    level[src] = 0;

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(int i = 0;i<(int)graph[u].size();i++)
        {
            v = graph[u][i];

            if(!visited[v])
            {
                level[v] =level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
    }

    return level[destination ];
}


int main()
{
    int node,edge,u,v,source,destination;

    cout<<"enter the number of nodes and edges ";
    cin>>node>>edge;

    cout<<"enter the edges "<<endl;

    for(int i  = 0;i<edge;i++)
    {
       cin>>u>>v;

       graph[u].push_back(v);
       graph[v].push_back(u);
    }
     cout<<"enter the source and destination "<<endl;
     cin>>source>>destination;

     int result = bfs(source,destination);
     cout<<result;
    return 0;
}
