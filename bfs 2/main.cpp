#include <bits/stdc++.h>

using namespace std;

vector<int>G[100];

void bfs(int n,int src)
{
    queue<int>q;
    q.push(src);
    int visited[1000],level[1000];
    visited[src] = 1;

    while(!q.empty())
    {
        int u  = q.front();

        for(int i = 0;i<(int)G[u].size();i++)
        {
            int v = G[u][i];

            if(!visited[v])
            {
                level[v] = level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
        q.pop();
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d to %d distance %d\n",src,i,level[i]);
    }
}

int main()
{   int edge,src,node,a,b;

    cout << "enter the number of nodes and edges" << endl;
    cin>>node>>edge;

    cout<<"enter the  nodes"<<endl;

    for(int i= 0;i<edge;i++)
    {
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    cout<<"enter the source node"<<endl;
    cin>>src;

    bfs(edge,src);

    return 0;
}
