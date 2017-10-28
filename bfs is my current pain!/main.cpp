#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];

void bfs (int source,int destination)
{
    queue<int>q;
    int visited[100] ={0},level[100]= {0};
    visited[source] = 0;
    level[source] = 0;
    q.push(source);

    while(!q.empty())
    {
        int u = q.front();

        for(int i = 0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];

            if(!visited[v])
            {
                level[v] = level[u] +1;
                visited[v] = 1;
                q.push(v);
            }

        }
        q.pop();
    }
    printf("the distance between source and destination is %d",level[destination]);
}
int main()
{    int node,edge,a,b,source,destination;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edge;

    for(int i = 0;i<edge;i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout<<"enter the source and destination "<<endl;
    cin>>source>>destination;
    bfs(source,destination);

    return 0;
}
