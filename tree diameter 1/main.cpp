#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1000];
int node,edge,u,v;
int mx=-1,mxNode;
int dis[100][100];
int level[100];
int visited[100];

void dfs(int u)
{
    visited[u] =1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v =graph[u][i];
        if(visited[v]==0)
        {
            level[v] = level[u]+1;
            if(level[v]>mx)
            {
                mx = level[v];
                mxNode = v;

            }
            dfs(v);
        }
    }
}



int main()
{


    cout<<"nodes and edges "<<endl;
    cin>>node>>edge;

    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    level[1]=0;
    dfs(1);

    cout<<mx<<endl;
    cout<<mxNode<<endl;

    memset(level,0,sizeof(level));
    memset(visited,0,sizeof(visited));

    dfs(mxNode);
    cout<<mx<<endl;
    cout<<mxNode<<endl;
    return 0;
}
