#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> >graph[1000];
int dist[1000];

int main()
{
    fill(dist,dist+1000,9999);

    int node,edge,u,v,cost;
    bool negCycle =false;
    cout<<"Node edge "<<endl;
    cin>>node>>edge;

    cout<<"edges and their costs "<<endl;
    for(int I =0;I<edge;I++)
    {
        cin>>u>>v>>cost;
        graph[u].push_back({v,cost});
        graph[v].push_back({u,cost});
    }
    dist[1]=0;
    for(int I= 0;I<node-1;I++)
    {
        for(int u = 0;u<node;u++)
        {
            for(int J =0;J<(int)graph[u].size();J++)
            {
                pair<int,int>v =graph[u][J];
                if(dist[v.first]>dist[u]+v.second)
                {
                    dist[v.first]=dist[u]+v.second;
                }
            }
        }
    }

    for(int u= 0;u<node;u++)
    {
        for(int J=0;J<(int)graph[u].size();J++)
        {
            pair<int,int>v =graph[u][J];
            if(dist[v.first]>dist[u]+v.second)
            {
                negCycle =true;
                break;
            }
        }
        if(negCycle)break;
    }
    if(negCycle)cout<<"negative cycle"<<endl;
    else
    {
        for(int i=0;i<=node;i++)
        {
            cout<<i<<" "<<dist[i]<<endl;
        }
    }

    return 0;
}
