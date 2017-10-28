#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];
int dfsNumberCounter = 0;
vector<int>dfs_num;
vector<int>dfs_low;
vector<int>arti;
vector<bool>visited;
vector<int>parent;
int dfsRoot,rootChildren;


void findArticulationPoint(int u)
{
    visited[u] = true;
    dfs_num[u]= dfs_low[u] = dfsNumberCounter++;
    int v;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        v = graph[u][i];
        if(!visited[v])
        {
            parent[v]= u;
            if(u==dfsRoot)rootChildren++;

            findArticulationPoint(v);

            if(dfs_low[v]>=dfs_num[u])
            {
                arti.push_back(u);
            }
            dfs_low[u] = min(dfs_low[u],dfs_low[v]);
        }
        else if(v!=parent[u])
        {
            dfs_low[u]=  min(dfs_low[u],dfs_num[v]);
        }
    }
}

int main()
{
    int node,edge,u,v;
    cin>>node>>edge;

    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs_num.assign(100,0);
    dfs_low.assign(100,0);
    visited.assign(100,false);
    parent.assign(100,0);
    for(int i = 0;i<node;i++)
    {
        if(!visited[i])
        {
            dfsRoot = i;
            rootChildren = 0;
            findArticulationPoint(i);
            if(rootChildren>1)arti.push_back(i);
        }
    }
    for(auto i:arti)
    {
        cout<<i<< " ";
    }


    return 0;
}
