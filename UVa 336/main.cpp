#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(true){

    int edge;
    cin>>edge;
    if(!edge)return 0;
    if(!edge)return 0;
    vector<int>graph[1000];
    int c=1;
    int query,u,ttl,visited[1000],level[1000],v;

    set<int>nodes;


    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        nodes.insert(u);
        nodes.insert(v);
    }


    while(true)
    {
        int counter=0;
        cin>>u>>ttl;
        if(!u and !ttl)
            break;
             queue<int>q;
    q.push(u);
    level[u]=0;
    visited[u]=1;
    while(!q.empty())
    {

        int u = q.front();

        q.pop();

            for(int i=0;i<(int)graph[u].size();i++)
            {
                v = graph[u][i];
                if(!visited[v]){
                    level[v]=level[u]+1;
                    q.push(v);
                    visited[v]=1;


            }
            }
    }


        for (auto i:nodes)
        {

            if(abs(level[u]-level[i])>ttl)counter++;
            //231140

            //cout<<level[u]<< " "<<level[i]<<endl;
        }
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c++,counter,u,v);
    }
    }

    return 0;
}
