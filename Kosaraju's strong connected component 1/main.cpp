#include <bits/stdc++.h>

using namespace std;
int counter=1;
vector<int>graph[1000];
vector<int>post_order;
vector<int>visied;
vector<int>transpose[1000];

void dfs1(int u)
{
    visied[u]=1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(!visied[v])
        {

            dfs1(v);
        }
    }
    post_order.push_back(u);
}
void dfs2(int u)
{
    visied[u]=1;
    for(int i = 0;i<(int)transpose[u].size();i++)
    {
        int v = transpose[u][i];
        if(!visied[v])
        {
            dfs2(v);
        }
    }
    cout<<u<<" ";
}
int main()
{
    int node,edge,u,v;
    cin>>node>>edge;
    visied.assign(1000,0);

    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        transpose[v].push_back(u);
    }
    for(int i = 0;i<node;i++)
    {
        if(visied[i]==0)
        {
            dfs1(i);
        }
    }
    visied.assign(1000,0);
    for (auto i:post_order)
        cout<<i<<" ";
    cout<<endl;
    for(int i =(int)post_order.size()-1;i>=0;i--)
    {
      if(visied[post_order[i]]==0)
        dfs2(post_order[i]);

      cout<<endl;
    }
    return 0;
}
