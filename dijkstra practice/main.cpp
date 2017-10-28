#include <bits/stdc++.h>

using namespace std;

vector<int>edge[100],cost[100];
const int infinity = 999999999;


struct data
{
    int city,dist;

    bool operator < (const data & p) const
    {
        return dist<p.dist;
    }
};

int dijkstra(int source,int destination)
{
    priority_queue<data>q;
    int d[100];

    for(int i = 0;i<100;i++)
    {
        d[i] = infinity;
    }
    d[source] = 0;

    data u,v;

    u.city = source;
    u.dist = 0;

    q.push(u);

    while(!q.empty())
    {
        u = q.top();
        cout<<u.dist<<endl;
        q.pop();

        for(int i = 0;i<(int)edge[u.city].size();i++)
        {
            v.city = edge[u.city][i];
            v.dist = d[u.city]+cost[u.city][i];

            if(v.dist<d[v.city])
            {
                d[v.city] = v.dist;
                 q.push(v);
            }

        }


    }
    return d[destination];
}

int main()
{
    int n,e,u,v,c,source,destination;

    cout<<"enter number of nodes and edges ";
    cin>>n>>e;

    cout<<"enter the edges and their costs "<<endl;

    for(int i = 0;i<e;i++)
    {
        cin>>u>>v>>c;

        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(c);
        cost[v].push_back(c);

    }
    cout<<"enter the source and destination "<<endl;
    cin>>source>>destination;

    int result = dijkstra(source,destination);
    cout<<result;
    return 0;
}
