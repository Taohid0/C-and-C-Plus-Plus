#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];
vector<int>dfsNum,dfsLow,S,visited;
int counter;

void tarjanScc(int u)
{
    dfsLow[u] =dfsNum[u] = counter++;
    S.push_back(u);
    visited[u]= 1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v =graph[u][i];
        if(dfsNum[v]==-1)
            tarjanScc(v);
        if(visited[v])
            dfsLow[u] = min(dfsLow[u],dfsLow[v]);

        if(dfsLow[u]==dfsNum[u])
        {
            while(1)
            {
                v= S.back();
                S.pop_back();
                visited[v] =1;
                cout<<v<<" ";
                if(u==v)break;
            }
            cout<<endl;
        }
    }
}

int main()
{
    int u,v,node,edge;
    cin>>node>>edge;
    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }
    dfsNum.assign(100,-1);
    dfsLow.assign(100,0);
    visited.assign(100,0);
    counter = 0;
     for(int i = 0;i<node;i++)
     {
         if(dfsNum[u]==-1)
            tarjanScc(i);
     }
    return 0;
}
