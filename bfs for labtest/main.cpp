#include <bits/stdc++.h>

using namespace std;

vector<int>adjList[100];


int bfs(int source,int destination)
{
    int level[100] = {0};
    int parent[100] = {0};
    int visited[100] = {0};

    queue<int>q;

    q.push(source);

    while(!q.empty())
    {
       int u = q.front();
       q.pop();

       for (int i = 0;i<(int)adjList[u].size();i++)
       {
           int v = adjList[u][i];

           if(!visited[v])
           {
               visited[v] = 1;
               level[v] = level[u]+1;
               q.push(v);
           }
       }
    }
    return level[destination];

}

int main()
{   int node,edge,source,destination,u,v;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edge;

    cout<<"enter the edges " ;

    while(edge--)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout<<"enter the source and destination ";
    cin>>source>>destination;

    int result = bfs(source,destination);
    cout<<result;
    return 0;
}
