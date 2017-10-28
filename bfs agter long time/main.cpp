#include <bits/stdc++.h>

using namespace std;

vector<int>edge[100];

int bfs(int src,int destination)
{
    int level[100];
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
    return level[destination];
}

int main()
{   int node,edg,source,destination,a,b;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edg;

    cout<<"enter the edges : ";

    for(int i = 1;i<=edg;i++)
    {
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    cout<<"enter the source and destination " ;
    cin>>source>>destination;

    int result = bfs(source,destination);
    cout<<result;
    return 0;
}
