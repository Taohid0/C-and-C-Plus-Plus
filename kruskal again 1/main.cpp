#include <bits/stdc++.h>

using namespace std;

int parent[100];

struct data
{
    int u,v,cost;

    bool operator <  (const data & p) const
    {
        return cost<p.cost;
    }
};

vector<data>v;

int find_parent(int r)
{
    if(parent[r]==r)
    {
        return r;
    }
    parent[r]= find_parent(parent[r]);

    return find_parent(parent[r]);
}

int kruskal(int node)
{
    int min_cost = 0,cnt = 0;

    for(int i = 0;i<100;i++)
    {
        parent[i]= i;
    }

    sort(v.begin(),v.end());

    for(int i = 0;i<(int)v.size();i++)
    {
        int u = find_parent(v[i].u);
        int u2 = find_parent(v[i].v);

        if(u!=u2)
        {
            parent[u] = u2;
            min_cost+=v[i].cost;
            cnt++;
        }
        if(node-1==cnt)
        {
            break;
        }
    }
    return min_cost;

}

int main()
{
    int n,e,result;



    cout<<"enter number of nodes and edges ";
    cin>>n>>e;
    data d;

    while(e--)
    {
        cin>>d.u>>d.v>>d.cost;
        v.push_back(d);
    }
    result = kruskal(n);
    cout<<result;
    return 0;
}
