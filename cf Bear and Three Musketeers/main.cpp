#include <bits/stdc++.h>

using namespace std;
vector<int>graph[4005];
int node,edge;
int mx=999999;
int parent[4005];
int visited[4005];
int level[4005];

void dfs(int u)
{
    visited[u]=1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(v!=parent[u])
        {
            parent[v]=u;
            level[v]=level[u]+1;
            dfs(v);

        }
        else
        {
            if(abs(level[u]-level[v])==2 and parent[parent[u]]==v)
            {
                mx =min(mx,(int)graph[u].size()+(int)graph[v].size()+(int)graph[parent[u]].size()-6);
            }

        }
    }
}

int main()
{
    int u,v;
    cin>>node>>edge;
    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i =1;i<=node;i++)
    {
        if(!visited[i])
            dfs(i);
    }
    if(mx==999999)cout<<-1<<endl;
    else
        cout<<mx<<endl;
    return 0;
}
