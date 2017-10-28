#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;

int parent[100];

int findParent(int u)
{
    if(parent[u]==u)
    {
        return u;
    }
    parent[u] = findParent(parent[u]);
    return parent[u];
}
int kruskal(int node)
{
    int sum=0,counter=0;

    while(counter<node-1)
    {
        pair<int,pair<int,int> > frnt = pq.top();
        pq.pop();
        int u = frnt.second.first;
        int v = frnt.second.second;
        int paru = findParent(u);
        int parv = findParent(v);
        cout<<pq.size()<<" "<<counter<<endl;

        if(paru!=parv)
        {
            sum+=frnt.first;
            counter++;
            parent[parv]=paru;
        }
    }
    return sum;
}


int main()
{
    int node,edge,u,v,cost;

    for(int i = 0;i<100;i++)
    {
        parent[i]=i;
    }

    cout<<"nodes and edges"<<endl;
    cin>>node>>edge;

    cout<<"edges and their costs"<<endl;
    while(edge--)
    {
        cin>>u>>v>>cost;
        pq.push({cost,{u,v}});
    }
    int r =kruskal(node);
    cout<<r<<endl;

    return 0;
}
