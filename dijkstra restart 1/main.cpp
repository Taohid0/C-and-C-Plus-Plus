#include <bits/stdc++.h>

using namespace std;

int dist[10000];
vector<pair<int,int> >graph[1000];
int parent[100];
void dijkstra(int s)
{
    dist[s]= 0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int > > >pq;
    pq.push({0,s});

    while(!pq.empty())
    {
        pair<int,int>frnt =pq.top();
        pq.pop();
        int u =frnt.second;
        int d =frnt.first;
        if(d>dist[u])continue;
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            pair<int,int>v = graph[u][i];

            if(dist[u]+v.first<dist[v.second])
            {
                parent[v.second] =u;
                dist[v.second]=dist[u]+v.first;
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
    int node,edge,u,v,cost;
    cout<<"node and edge number"<<endl;
    cin>>node>>edge;

    while(edge--)
    {
        cin>>u>>v>>cost;
        graph[u].push_back({cost,v});
        graph[v].push_back({cost,u});
    }
    memset(dist,9999,sizeof(dist));
    dijkstra(1);
    for(int i = 1;i<=node;i++)
    {
        cout<<i<<" " <<dist[i]<<endl;
    }
    cout<<endl;
    print_parent(1,5);

    return 0;
}
