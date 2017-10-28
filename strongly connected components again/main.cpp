#include <bits/stdc++.h>

using namespace std;

vector<int>dfsnum,dfslow,visited,adjList[100];
int UNVISITED=0;
int dfsCounter=1;
stack<int>q;

void tarjanSCC(int u)
{
    visited[u]=true;
    q.push(u);
    dfsnum[u]=dfslow[u]=dfsCounter++;
    for(int i=0;i<(int)adjList[u].size();i++)
    {
        int v= adjList[u][i];

        if(dfsnum[v]==UNVISITED)
        {
            tarjanSCC(v);
        }
        if(visited[v])
        {
            dfslow[u]=min(dfslow[u],dfslow[v]);
        }
    }
    if(dfslow[u]==dfsnum[u])
    {

        while(true)
        {
            int v=q.top();
            q.pop();
            cout<<v<< " ";
            visited[v]=false;
            if(u==v)break;
        }
        cout<<endl;
    }

}

int main()
{

    int u,v,node,edge;
    dfsnum.assign(100,UNVISITED);
    dfslow.assign(100,UNVISITED);
    visited.assign(100,UNVISITED);

    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
    }
    for(int i=0;i<node;i++)
    {
        if(dfsnum[i]==UNVISITED)
        {
            tarjanSCC(i);
        }
    }
    return 0;
}
