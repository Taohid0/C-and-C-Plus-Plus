#include <bits/stdc++.h>

using namespace std;

vector< pair<int,int> > graph[1000];

int dijkstra(int src,int des)
{
    vector<int>dist(10000000,99999999);
    dist[src] = 0;
    priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    pq.push(make_pair(0,src));

    while(!pq.empty())
    {
        pair<int,int>temp = pq.top();
        pq.pop();
        int d = temp.first;
        int u =temp.second;
        if(d<dist[u])
        {
            for(int i = 0;i<(int)graph[u].size();i++)
            {
                int v = graph[u][i];
                if(dist[u]+)
            }
        }

    }
}

int main()
{
    int node,edge,u,v,c,src,des;
    cin>>node>>edge;
    for(int i = 1;i<=edge;i++)
    {
        cin>>u>>v>>c;
        graph[u].push_back(make_pair(v,c));
        graph[v].push_back(make_pair(u,c));
    }
    cin>>src>>des;
    int result= dijkstra(src,des);
    return 0;
}
