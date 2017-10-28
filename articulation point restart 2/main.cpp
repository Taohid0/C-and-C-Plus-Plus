#include <bits/stdc++.h>

using namespace std;

int parent[100],dfslow[100],dfsnum[100],visited[100],arti[100],counter=1,dfsRoot,rootCounter;
vector<int>graph[1000];


void articulationFind(int u)
{

    dfsnum[u]=dfslow[u]=counter++;

    for(int i = 0;i<(int)graph[u].size();i++)
    {

        int v=graph[u][i];
        if(!dfsnum[v])
        {
            parent[v]=u;
            if(u==dfsRoot)rootCounter++;
            articulationFind(v);

            if(dfsnum[u]<=dfslow[v])
            {
                arti[u]=1;
            }
            dfslow[u] = min(dfslow[u],dfslow[v]);
        }
        else if(parent[v]!=u)
        {
            dfslow[u]=min(dfslow[u],dfsnum[v]);
        }
    }
}

int main()
{
    int node,edge,u,v;

    cout<<"nodes and edges "<<endl;
    cin>>node>>edge;

    cout<<"edge "<<endl;

    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    for(int i = 1;i<=node;i++)
    {
        if(!dfsnum[i])
        {
            dfsRoot=i;
            rootCounter =0;
            articulationFind(i);
            if(rootCounter>1)
                arti[i]=1;

        }
    }
    for(int i = 1;i<=node;i++)
    {
        if(arti[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
