#include <bits/stdc++.h>

using namespace std;
vector<int>edge[10000];
vector<int>color;

bool isBipartite(int s)
{
    queue<int>q;
    q.push(s);
    color[s] = 0;
    bool isBipartitevar =true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int j = 0;j<(int)edge[u].size();j++)
        {
            int v = edge[u][j];
            if(color[v]==-1)
            {
                color[v]= 1-color[u];
            }
            else if(color[u]==color[v])
            {
                isBipartitevar = false;
                break;
            }
        }
    }
    return isBipartitevar;
}

int main()
{
    color.assign(100000,-1);

    return 0;
}
