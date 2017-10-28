#include <bits/stdc++.h>

using namespace std;

int res[1000][1000],mf,f,s,t;
vector<int>parent;

void augmented(int v,int minEdge)
{
    if(v==s)
    {
        f = minEdge;
        return;
    }
    else if(parent[v]!=-1){
    augmented(parent[v],min(minEdge,res[parent[v]][v]));
    res[parent[v]][v]-=f;
    res[v][parent[v]]+=f;
    }
}

int main()
{
    int node,edge,u,v,cost;
    cout<<"Enter number of nodes and edges ";
    cin>>node>>edge;
    cout<<"Enter edges and their costs ";
    fill(&res[0][0],&res[1000][0],0);
    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v>>cost;
        res[u][v] =cost;
        res[v][u]= cost;
    }
    cout<<"Enter source and sink ";
    cin>>s>>t;
    mf = 0;
    while(true)
    {
        f = 0;
        vector<int>dist(1000,INT_MAX);
        parent.assign(1000,-1);

        queue<int> q;
        q.push(s);
        dist[s] = 0;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int v =0;v<=node;v++)
            {
                if(res[u][v]>0 and dist[v]==INT_MAX)
                {
                    q.push(v);
                    dist[v] = dist[u]+1;
                    parent[v] = u;
                }
            }
        }
        augmented(t,INT_MAX);
        if(f==0)break;
        mf+=f;
    }
    cout<<mf<<endl;
    return 0;
}
