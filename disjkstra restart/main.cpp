#include <bits/stdc++.h>

using namespace std;

int dist[1000];
vector<pair<int,int> >graph[10000];

void dijkstra(int s)
{
    priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int> > >pq;
    dist[s] = 0;
    pq.push({0,s});

    while(!pq.empty())
    {
        pair<int,int>pr = pq.top();
        pq.pop();
        int d = pr.first;
        int u = pr.second;

        if(dist[u]<d)continue;

        for(int i =0;i<(int)graph[u].size();i++)
        {
            pair<int,int>v = graph[u][i];

            if(dist[u]+v.first<dist[v.second])
            {
                dist[v.second]=dist[u]+v.first;
                pq.push({dist[v.second],v.second});

            }
        }
    }
}

int main()
{
    int node,edge,u,v,cost;
    cout<<"Node and edges "<<endl;
    cin>>node>>edge;
    cout<<"enter edges and their costs "<<endl;
    while(edge--)
    {
        cin>>u>>v>>cost;
        graph[u].push_back({cost,v});
        graph[v].push_back({cost,u});
    }
    memset(dist,9999,sizeof(dist));
    dijkstra(1);
    for(int i =1;i<=node;i++)
    {
        cout<<i<<" "<<dist[i]<<endl;
    }

    return 0;
}
