#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100],parent(100);

int bfs(int source,int destination)
{
    queue<int>q;
    int level[100] = {0};
    int visited[100] = {0};
    level[source] = 0;
    visited[source] = 1;

    q.push(source);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];

            if(!visited[v])
            {
                level[v] = level[u]+1;
                visited[v] = 1;
                parent[v]=u;;
                q.push(v);
            }
        }
    }
    return level[destination];
}

int main()
{   int a,b,source,destination,node,edge;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edge;

    cout<<"enter the nodes : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    cout<<"enter the source and destination : ";
    cin>>source>>destination;

    int result = bfs(source,destination);
    cout<<result<<endl;
    int p = destination;
    while(1)
    {
        cout<<parent[p]<<" ";

        p = parent[p];if(p==source)break;
    }

    return 0;
}
