#include <bits/stdc++.h>

using namespace std;

#define UNVISITED -1

vector<int>graph[100],dfsLow,dfsNow,visited;
stack<int>st;
int counter;

void stronglyConnected(int u){
    dfsLow[u]=dfsNow[u]=counter++;

    visited[u]=1;
    st.push(u);
    for(int i=0;i<(int)graph[u].size();i++)
    {
        int v=graph[u][i];
        if(dfsNow[v]==UNVISITED)
        {
            stronglyConnected(v);
        }
        if(visited[v])
        {
            dfsLow[u]=min(dfsLow[u],dfsLow[v]);
        }
    }
    if(dfsLow[u]==dfsNow[u])
    {
        while(1){
        int r=st.top();
        st.pop();
        visited[r]=UNVISITED;
        cout<<r<<" ";
        if(r==u)break;
        }
        cout<<endl;
    }
}

int main()
{
    int node,edge,u,v;

    counter=0;

    dfsLow.assign(100,UNVISITED);
    dfsNow.assign(100,UNVISITED);
    visited.assign(100,UNVISITED);

    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);

    }

    for(int i=0;i<node;i++)
    {
        if(dfsNow[i]==UNVISITED)
        {
            stronglyConnected(i);
        }
    }

    return 0;
}
