#include <bits/stdc++.h>

using namespace std;

vector<int>colors;
vector<int>edge[100001];

int bipartiteValue(int s)
{
    colors.assign(100001,-1);
    queue<int>q;
    q.push(s);
    colors[s] = 0;
    int black= 0,white = 0;
    black++;
    while(!q.empty())
    {
     int u = q.front();
     q.pop();
     for(int i = 0;i<(int)edge[u].size();i++)
     {
         int v = edge[u][i];

         if(colors[v]==-1)
         {
             colors[v] = 1-colors[u];
             if(colors[v]==1)white++;
             else black++;
         }
     }
    }
    return max(white,black);
}
int main()
{
    int test,u,v,n;
    cin>>test;
    for(int i = 1;i<=test;i++)
    {
       for(int j = 0;j<100001;j++)edge[j].clear();

        colors.assign(100001,-1);
        cin>>n;
        for(int j =0;j<n;j++)
        {
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        int r = bipartiteValue(1);
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}
