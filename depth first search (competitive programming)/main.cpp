#include <bits/stdc++.h>

using namespace std;
//this code does not work correctly
typedef pair<int,int>ii;
typedef vector<int>vi;
typedef vector<ii>vii;

vi dfs_num;
vi level;
vii adjList[100];

void dfs(int u)
{
    dfs_num[u] = 1;

    for(int i  = 0;i<(int)adjList[u].size();i++)
    {
        ii v = adjList[u][i];

        if(dfs_num[v.first]==0)
        {
            level[v.first] = level[u]+1;
            dfs(v.first);
        }
    }

}
int main()
{   int u,v,source,destination,e,n;

    dfs_num.assign(n,0);
    level.assign(n,0);

    cout<<"enter the number of nodes and edges ";
    cin>>n>>e;

    cout<<"enter the edges and their costs ";

    for(int i = 0;i<e;i++)
    {
        cin>>u>>v;
        adjList[u].push_back(make_pair(v,10));
        adjList[v].push_back(make_pair(u,10));
    }
    cout<<"enter the source and destination ";
    cin>>source>>destination;

     dfs(source);
    cout<<level[destination];

    return 0;
}
