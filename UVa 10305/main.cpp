#include <bits/stdc++.h>

using namespace std;
vector<int>graph[101];
vector<int>vi;
vector<bool>visited;

void topSort(int u)
{
    visited[u] = 1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(!visited[v])
        {
            topSort(v);
        }
    }
    vi.push_back(u);
}

int main()
{
    int node,edge,u,v;

    while(cin>>node>>edge)
    {
        if(!edge&&!node)break;

        visited.assign(101,false);
        vi.clear();
       while(edge--)
       {
           cin>>u>>v;
           graph[u].push_back(v);

       }
       for(int i =1;i<=node;i++)
       {      if(!visited[i])
           topSort(i);
       }
       int len=  (int)vi.size();
       cout<<vi[len-1];
       for(int i = len-2;i>=0;i--)
       {
           cout<<" "<<vi[i];
       }
       cout<<endl;
    }
    return 0;
}
