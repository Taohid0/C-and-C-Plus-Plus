#include <bits/stdc++.h>

using namespace std;

int dist[1000];
vector<pair<int,int> >graph[1000];

int main()
{
    int node,edge,u,v,cost;
    cout<<"node and edges "<<endl;
    cin>>node>>edge;

    cout<<"Enter edges and their costs"<<endl;
    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v>>cost;
        graph[u].push_back({v,cost});
        graph[v].push_back({u,cost});
    }
    fill(dist,dist+1000,99999);
    dist[1]=0;
    for(int i = 1;i<node;i++)
    {
        for(int u=1;u<=node;u++)
        {
            for(int j=0;j<(int)graph[u].size();j++)
            {
                pair<int,int>v =graph[u][j];

                if(dist[v.first]>dist[u]+v.second)
                {
                    dist[v.first] = dist[u]+v.second;
                }
            }
        }
    }
    bool negCycle =false;

    for(int i =1;i<=node;i++)
    {
        for(int j =0;j<(int)graph[i].size();j++)
        {
            pair<int,int>v = graph[i][j];
            if(dist[v.first]>dist[i]+v.second)
            {
                negCycle=true;
            }
        }
        if(negCycle)break;
    }
    if(negCycle)cout<<"negative cycle"<<endl;
    else
    {
        for(int i =1;i<=node;i++)
        {
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
    return 0;
}
