#include <bits/stdc++.h>

using namespace std;
vector<int>G[10000];

void bfs(int node,int src){
     queue<int>q;
     int visited[100];
     int level[100];
     int parent[100];
        visited[src] = 1;
        level[src] = 0;

        while(!q.empty())
        {
            int u  = q.front();

            for(int i = 0;i<(int)G[u].size();i++)
            {
                int v = G[u][i];

                if(!visited[v]){
                    level[v] =level[u]+1;
                    parent[v] = u;
                    visited[v] = 1;
                    q.push(v);

                }
            }
            q.pop();
        }
        for(int i = 1;i<=node;i++){
            printf("%d to %d distance %d\n",src,i,level[i]);
        }
                 }

int main()
{
    int src,node,edge,a,b;

    cout<<"enter the number of nodes and edges"<<endl;

    cin>>node>>edge;

    cout<<"enter the points"<<endl;

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b;

        G[a].push_back(b);
        G[b].push_back(a);

    }
    cout<<"enter the source"<<endl;
    cin>>src;

    bfs(node,src);
    return 0;
}
