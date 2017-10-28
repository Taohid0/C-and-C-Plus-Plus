#include <bits/stdc++.h>

using namespace std;

vector<int>edge[200010];
vector<int>varsities;
int temp[2000010]={0};int level[200001];
void bfs(int src)
{

    int visited[100] = {0};
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
                level[v] = level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
    }


}

int main()
{

    int n,k;
    cin>>n>>k;
    int u,v;
    for(int i = 0;i<2*k;i++)
    {
        cin>>u;
        varsities.push_back(u);
    }

    for(int i=  0;i<n-1;i++)
    {
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int len = (int)varsities.size();
    for(int i = 0;i<n;i++)
    {
        bfs(varsities[i]);

    }
    long long r = 0;
    for(int i = 0;i<len;i++)
    {
        r+=level[varsities[i]];
    }
     cout<<r<<endl;
    return 0;
}
