#include <bits/stdc++.h>

using namespace std;

int parent[100];
vector<pair<int,pair<int,int> > > graph;

int findParent(int r)
{
    if(r==parent[r])return r;
    parent[r]=findParent(parent[r]);
    return parent[r];
}

int kruskal(int node,int edge)
{
    sort(graph.begin(),graph.end());
    int r=0;
    int counter=0;

    for(int i=0;i<edge;i++)
    {
        int u=graph[i].second.first;
        int v=graph[i].second.second;

        int parentU=findParent(u);
        int parentV=findParent(v);

        if(parentU!=parentV)
        {
            parent[v]=parentU;
            r+=graph[i].first;
            counter++;
        }

        cout<<counter<<endl;
        if(counter==node-1)break;
    }
    return r;
}


int main()
{
    int node,edge,u,v,cost;
    for(int i=0;i<100;i++)
    {
        parent[i]=i;
    }
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
       cin>>u>>v>>cost;
       graph.push_back(make_pair(cost,make_pair(u,v)));
    }
    int result=kruskal(node,edge);
    cout<<result;
    return 0;
}
