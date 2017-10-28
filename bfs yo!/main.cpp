#include <bits/stdc++.h>

using namespace std;

int level[1000],visited[1000];
vector<int>graph[1000];

void bfs(int s)
{
    queue<int>q;
    level[s] = 0;
    visited[s] =1;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visited[v]==0)
            {
                level[v] = level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    memset(visited,0,sizeof(visited));
    int node,e,u,v;
    cin>>node>>e;
    for(int i = 0;i<e;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(0);
    cout<<level[4];

    return 0;
}
