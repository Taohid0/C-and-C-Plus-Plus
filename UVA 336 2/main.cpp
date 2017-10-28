#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1000];
int visited[1000],level[1000];

void bfs(int s)
{
    visited[s]=1;
    level[s]=0;
    queue<int>q;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                q.push(v);
                level[v] = level[u]+1;
            }
        }
    }
}

int main()
{
    int u,v,edge,c=1;
    while(true)
    {
        memset(level,0,sizeof level);
        memset(visited,0,sizeof visited);
        set<int>node;
        cin>>edge;
        if(!edge)
        {
            return 0;
        }
        while(edge--)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            node.insert(u);
            node.insert(v);
        }
        bfs(u);
        while(true)
        {
            cin>>u>>v;

            if(!u and !v)
                break;
            int counter=0;
            for (auto i:node)
            {
                if(abs(level[u]-level[i])>v)
                {
                    counter++;
                }
                cout<<level[i]<<" "<<i<<endl;;
            }
            cout<<endl;

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c,counter,u,v);
        }
    }
    return 0;
}
