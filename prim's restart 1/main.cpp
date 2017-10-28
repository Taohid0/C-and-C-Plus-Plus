#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int,int> >pq;
vector<pair<int,int> >graph[1000];
int visited[100];

void process(int u)
{
    visited[u]=1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        pair<int,int>v = graph[u][i];
        if(!visited[v.first])
        {
            pq.push({-v.second,v.first});
        }
    }
}

int main()
{
    int node,edge,u,v,cost;

    cout<<"nodes edges"<<endl;
    cin>>node>>edge;

    cout<<"edges and their costs"<<endl;
    while(edge--)
    {
        cin>>u>>v>>cost;
        graph[u].push_back({v,cost});
        graph[v].push_back({u,cost});
    }
    process(1);
    int sum=0;

    while(!pq.empty())
    {
        pair<int,int>v =pq.top();
        pq.pop();
        if(!visited[v.second])
        {
            sum+=-v.first;
            process(v.second);
           // cout<<v.second<<" ";
        }
    }
    cout<<sum<<endl;
    return 0;
}
