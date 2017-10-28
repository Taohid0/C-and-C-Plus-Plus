#include <bits/stdc++.h>

using namespace std;

vector<int>G[100];
int cost[100][100];


const int infinity = 1000000;

int bfs(int source,int destination)
{
    int d[100] = {0};
    for(int i = 0;i<100;i++)
    {
       d[i]  = infinity;
    }

    queue<int>q;
    q.push(source);
    d[source] = 0;

    while(!q.empty())
    {
        int u = q.front();q.pop();

        for(int i = 0;i<(int)G[u].size();i++)
        {
            int v = G[u][i];

            if(d[v]>d[u]+cost[u][i])
            {
                d[v] = d[u]+cost[u][i];
                q.push(v);
            }
        }
    }
    return d[destination];
}

int main()
{   int edge,node,a,b,source,cst,destination;

    cout << "enter the number of nodes and destination : ";
    cin>>node>>edge;

    cout<<"enter then nodes and costs : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;
        G[a].push_back(b);
        G[b].push_back(a);
        cost[a][b] = cst;
        cost[b][a] = cst;
    }
    cout<<"enter the source and destination  : " ;
    cin>>source>>destination;

    int result = bfs(source,destination);

    cout<<"the distance is "<<result;
    return 0;
}
