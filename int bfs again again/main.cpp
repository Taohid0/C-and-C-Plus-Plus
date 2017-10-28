#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];

void bfs(int source,int destination)
{
    queue<int>q;
    int visited[100],int level[100];
    visited[source] = 1;
    lever[source] = 0;
    q.push(source);

    while(!q.empty())
    {
        int u = q.front();

        for(int i =0;i<(int)graph[u].size();i++)
        {
            int v = graph[u][i];

            if(!visited[v])
            {
                level[v] = level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
        q.pop();
    }
    printf("the distance between source and destination is %d",level[destination]);
}

int main()
{
    int node,edge,a,b;

    cout << "enter the number of nodes and edges " << endl;
    cin>>
    return 0;
}
