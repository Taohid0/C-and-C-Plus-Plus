#include <bits/stdc++.h>

using namespace std;
vector<int>graph[100001];
vector<int>visited;
vector<int>post_order;
void dfs(int u)
{
    visited[u]=1;
    for(int i =0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(!visited[v])
        {
            dfs(v);
        }
    }
    post_order.push_back(u);
}
int main()
{
    int test,node,edge,u,v;
    int cse =1;
    cin>>test;
    while(test--)
    {
        for(int i = 0;i<100001;i++)
            graph[i].clear();
        cin>>node>>edge;
        while(edge--)
        {
            cin>>u>>v;
            graph[u].push_back(v);
        }
        visited.assign(100001,0);
        post_order.clear();
        int ans = 0;
        for(int i = 1;i<=node;i++)
        {
            if(!visited[i])
            {
                dfs(i);

            }
        }
        visited.assign(100001,0);
        for(int i = (int)post_order.size()-1;i>=0;i--)
        {
            if(!visited[post_order[i]])
            {
                dfs(post_order[i]);
                ans++;
            }
        }
////        for(auto i:post_order)
////            cout<<i<<" ";
//        cout<<endl;
        cout<<"Case "<<cse++<<": "<<ans<<endl;
    }
    return 0;
}
