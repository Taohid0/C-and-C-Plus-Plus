#include <bits/stdc++.h>
using namespace std;

vector<int> edge[100];
vector<int>cost[100];

int bfs(int src,int destination)
{
    int d[100];
    for(int i= 0;i<100;i++)
    {
        d[i] = 1000000;
    }
    queue<int>q;
    q.push(src);
    d[src] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<(int)edge[u].size();i++)
        {
            int v  = edge[u][i];
            if(d[v]>d[u]+cost[u][i]);

            d[v] = d[u]+cost[u][i];
            q.push(v);
        }
    }
    return d[destination];
}



int main()
{   int node,edg,a,b,src,destination,cst;

    cout << "enter number of nodes and edges" << endl;
    cin>>node>>edg;

    cout<<"enter the edges and cost"<<endl;

    for(int i = 0;i<edg;i++)
    {
        cin>>a>>b>>cst;
        edge[a].push_back(b);
        edge[b].push_back(a);
        cost[a][b]=cst;
        cost[b][a]=cst;
    }
    cout<<"enter source and destination"<<endl;

    cin>>src>>destination;

    int result  =  bfs(src,destination);

    cout<<result;
    return 0;
}
