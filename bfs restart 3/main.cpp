#include <bits/stdc++.h>

using namespace std;

int dist[1000],parent[1000];
vector<pair<int,int> >graph[1000];

void dijkstra(int s)
{
    priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    dist[s] = 0;
    pq.push({0,s});

    while(!pq.empty())
    {
        pair<int,int>frnt = pq.top();
        pq.pop();
        int u = frnt.second;
        int d = frnt.first;
        if(dist[u]<d)continue;
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            pair<int,int>v = graph[u][i];

            if(dist[u]+v.first<dist[v.second])
            {
                parent[v.second]=u;
                dist[v.second] = dist[u]+v.first;
                pq.push({dist[v.second],v.second});
            }
        }
    }
}

void print_parent(int s,int d)
{
    cout<<d<<" ";
    while(s!=d)
    {
        d = parent[d];
        cout<<d<<" ";
    }
}

int main()
{
    int node,edge,u,v,c;

    cout<<"node and edge number "<<endl;
    cin>>node>>edge;
    while(edge--)
    {
        cin>>u>>v>>c;
        graph[u].push_back({c,v});
        graph[v].push_back({c,u});
    }

    fill_n(dist,1000,999999);

    dijkstra(1);

    for(int i = 1;i<=node;i++)
    {
        cout<<i<<" "<<dist[i]<<endl;
    }

    print_parent(1,5);

    return 0;
}
