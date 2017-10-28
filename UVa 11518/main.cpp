#include <bits/stdc++.h>

using namespace std;

vector<int>graph[10005];
int visited[10005],vv=0;
int counter;

void dfs(int u)
{
    counter++;
    visited[u] =vv;

    for(int i= 0;i<(int)graph[u].size();i++)
    {
        int v =graph[u][i];
        if(visited[v]!=vv)
            dfs(v);
    }
}
int main()
{
    int test,m,n,l,u,v;
    cin>>test;

    while(test--)
    {
        cin>>n>>m>>l;
        vv++;
        counter=0;
        for(int i = 0;i<10005;i++)
            graph[i].clear();

        for(int i=1;i<=m;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
        }
        for(int i =1;i<=l;i++)
        {
            cin>>u;
            if(visited[u]!=vv)
                dfs(u);
        }

        cout<<counter<<endl;
    }

    return 0;
}
