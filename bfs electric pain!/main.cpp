#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];
int cost[100][100];

int bfs(int source,int destination)
{
    int distance[100];

    for(int i = 0;i<100;i++)
    {
        distance[i] = 10000000;
    }
    queue<int>q;
    q.push(source);
    distance[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];

            if(distance[v]>distance[u]+cost[u][i])
            {
                distance[v] = distance[u]+cost[u][i];
                q.push(v);
            }
        }
    }
    return distance[destination];
}

int main()
{   int node,edge,a,b,c,source,destination;

    cout << "enter the number of nodes and edgess " << endl;
    cin>>node>>edge;

    cout<<"enter nodes and cost "<<endl;

    for(int i= 0;i<edge;i++)
    {
     cin>>a>>b>>c;

     graph[a].push_back(b);
     graph[b].push_back(a);

     cost[a][b] = c;
     cost[b][a] = c;
    }
    cout<<"enter source and destination "<<endl;
    cin>>source>>destination;

    int result = bfs(source,destination);

    cout<<result;

    return 0;
}
