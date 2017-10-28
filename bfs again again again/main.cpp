#include <bits/stdc++.h>

using namespace std;
vector<int>G[100],cost[100];


int bfs(int source,int destination)
{
    int distance[100];
    for(int i  = 0;i<100;i++)
    {
        distance[i] =1111110;
    }

    queue<int>q;
    q.push(source);
    distance[source] =0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i  = 0;i<(int)G[u].size();i++)
        {
            int v = G[u][i];

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
{
    int source,destination,node,edge,a,b,cst;

    cout << "enter the number of nodes and edges  " << endl;
    cin>>node>>edge;

    cout<<"enter the nodes : " ;

    for(int i  = 0;i<edge;i++)
    {
       cin>>a>>b>>cst;
       G[a].push_back(b);
       G[b].push_back(a);
       cost[a].push_back(cst);
      cost[b].push_back(cst);

    }
    cout<<"enter the source and destination : ";
    cin>>source>>destination;

    int result = bfs(source,destination);

    cout<<"the distance is  " <<result;
    return 0;
}
