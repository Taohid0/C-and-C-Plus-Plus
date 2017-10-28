#include <bits/stdc++.h>

using namespace std;

int parent[100];

int findParent(int u)
{
    if(parent[u]==u)
    {
        return u;
    }
    parent[u] =findParent(u);
    return parent[u];
}
priority_queue<pair<int,pair<int,int> >  ,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
int kruskal(int node)
{

    int counter = 0,sum=0;

    while(counter!=node-1)
    {
        pair<int,pair<int,int> >frnt= pq.top();
        pq.pop();
        int u = frnt.second.first;
        int v = frnt.second.second;
        int paru =findParent(u);
        int parv f=findParent(v);
        if(paru!=parv)
        {
            parent[paru]=parv;
            sum+=frnt.first;
            counter++;
        }
    }
    return sum;

}

int main()
{
    int node,edge,u,v,cost;
    cout<<"nodes and edges"<<endl;
    cin>>node>>edge;

    cout<<"edges and their costs"<<endl;
    while(edge--)
    {
        cin>>u>>v>>cost;
        pq.push{cost,{u,v}};
    }
    int r = kruskal(node);
    cout<<r<<endl;
    return 0;
}
