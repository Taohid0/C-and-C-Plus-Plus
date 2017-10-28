#include <bits/stdc++.h>

using namespace std;

int parent[100];

int find_parent(int u)
{
    if(parent[u]==u)
    {
        return u;
    }
    parent[u]=find_parent(parent[u]);
    return parent[u];
}

int main()
{
    int edge,u,v;
    for(int i = 1;i<100;i++)
    {
        parent[i]=i;
    }
    cout<<"edge number"<<endl;
    cin>>edge;

    cout<<"enter edges "<<endl;
    while(edge--)
    {
        cin>>u>>v;
        int paru=find_parent(u);
        int parv = find_parent(v);
        if(paru==parv)
        {
            cout<<u<<" "<<v<<" are friend"<<endl;
        }
        else
        {
            cout<<u<<" "<<v<<" are not friend"<<endl;
            parent[paru]=parv;
        }
    }
    return 0;
}
