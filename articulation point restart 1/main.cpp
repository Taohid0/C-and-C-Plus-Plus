#include <bits/stdc++.h>

using namespace std;

int dfsNow[1000],dfsLow[1000],visited[1000],counter=1,arti[1000],dfsParent[1000],dfsRoot,rootChildren;
vector<int>graph[1000];


void articulationFind(int u)
{
    dfsNow[u]=dfsLow[u]=counter++;
    visited[u]=1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v =graph[u][i];
        if(visited[v]==0)
        {
            dfsParent[v]=u;
            if(u==dfsRoot)
            {
                rootChildren++;
            }

            articulationFind(v);
            if(dfsLow[v]>=dfsNow[u])
                arti[u]=1;

            dfsLow[u]=min(dfsLow[u],dfsLow[v]);
        }
        else if(dfsParent[v]!=u)
        {
            dfsLow[u]=min(dfsLow[u],dfsNow[v]);
        }
    }
}

int main()
{
    int node,edge,u,v;
    cout<<"nodes and edges "<<endl;
    cin>>node>>edge;

    cout<<"edges "<<endl;
    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    memset(visited,0,sizeof visited);

    for(int i = 1;i<=node;i++)
    {
        rootChildren=0;
        if(visited[i]==0)
        {
            dfsRoot=i;
            articulationFind(i);
        }
        if(rootChildren>1)arti[i]=1;
    }
    for(int i =1;i<=node;i++)
    {
        if(arti[i])cout<<i<<" ";
    }
    return 0;
}
