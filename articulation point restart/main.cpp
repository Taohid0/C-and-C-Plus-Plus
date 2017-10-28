#include <bits/stdc++.h>

using namespace std;

#define UNVISITD -1

vector<int>graph[100],dfsLow,dfsNum,points,parent;
int counter,root,rootCounter;

void artiPoint(int u)
{

    dfsLow[u]=dfsNum[u]=counter++;
    for(int i=0;i<(int)graph[u].size();i++)
    {
        int v=  graph[u][i];

        if(dfsNum[v]==UNVISITD)
        {
            parent[v]=u;
            if(u==root)rootCounter++;

            artiPoint(v);

            if(dfsNum[u]<=dfsLow[v])
            {
                points[u]=1;
            }
        }
        else if(parent[u]!=v)
        {
            dfsLow[u]=min(dfsLow[u],dfsNum[v]);
        }
    }
}

int main()
{
    int node,edge,u,v;

    counter=0;
    dfsLow.assign(100,UNVISITD);
    dfsNum.assign(100,UNVISITD);
    points.assign(100,0);
    parent.assign(100,0);

    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {

        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<node;i++)
    {

        if(dfsNum[i]==UNVISITD)
        {
            root=i;
            rootCounter=0;
            artiPoint(i);
            points[i]=rootCounter>1;
        }
    }
    cout<<endl;
    for(int i=0;i<node;i++)
    {
        if(points[i]==1)cout<<i<<" ";
    }

    return 0;
}
