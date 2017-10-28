#include <bits\stdc++.h>

using namespace std;

#define MX 1000000
int level[100],visited[100];
vector<int>graph[100];

void bfs(int source,int destination)
{

    queue<int>q;
    level[source] = 0;
    visited[source] = 1;
    q.push(source);

    while(!q.empty())
    {
        int u =q.front();
        q.pop();

            for(int i=0;i<(int)graph[u].size();i++)
            {
                int v= graph[u][i];
                if(visited[v]==0){
                level[v] = level[u]+1;
                visited[v]= 1;
                q.push(v);
                }
            }

    }

}

int main()
{

    int node,edge,u,v,source,destination;
    cout<<"enter number of nodes and edges : ";
    cin>>node>>edge;
    cout<<"enter the edges ";
    for(int i= 0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    while(true){
            memset(visited,0,sizeof(visited));
    cout<<"enter source and destination ";
    cin>>source>>destination;
    bfs(source,destination);
    cout<<level[destination];
    }
    return 0;
}
