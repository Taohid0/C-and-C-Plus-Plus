#include <bits/stdc++.h>

using namespace std;


vector<int>graph[100];

int bfs(int source,int destination )
{
    int visited[100] ={0};
    int parent[100] ={0};
    int level[100] ={0};

    queue<int>q;

    q.push(source);

    visited[source] = 1;
    level[source] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i  = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];

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
{ int node,edge,source,a,b,destination;

    cout << "enter the number of node and edges : " << endl;
    cin>>node>>edge;

    cout<<"enter the edges : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout<<"enter the source and destination : ";
    cin>>source>>destination;

    int result = bfs(source,destination);

    cout<<result;
return 0;
}
