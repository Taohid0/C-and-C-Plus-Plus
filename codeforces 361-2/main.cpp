#include <bits/stdc++.h>

using namespace std;


vector<int>edge[200010];
  int level[200010];
int bfs(int src,int destination)
{

    int visited[200010] = {0};
    queue<int>q;
    q.push(src);
    visited[src] = 1;
    level[src] =0;

    while(!q.empty())
    {
        int u = q.front();q.pop();

        for(int i = 0;i<(int)edge[u].size();i++)
        {
            int v =edge[u][i];

            if(!visited[v])
            {
                level[v] = min(level[u]+1,abs(u-v));
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    return level[destination];
}


int main()
{
    for(int i = 1;i<200010;i++)
    {
        for(int j =1;j<=200010;j++)level[j] = abs(i-j);
    }
    int node,u;
    cin>>node;
    for(int i=1;i<=node;i++)
    {
        cin>>u;
        edge[i].push_back(u);
    }
    for(int i = 1;i<=node;i++)
    {
        cout<<bfs(1,i)<<" ";
    }
    return 0;
}
