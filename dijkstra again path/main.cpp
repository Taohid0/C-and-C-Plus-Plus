#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100],cost[100],parent(100);
int d[100];
const int infinity  = 1000000;

struct data{
     int city,dist;
     bool operator < (const data & p)const{
     return dist>p.dist;
     }};

int dijkstra(int source,int destination)
{
    for(int i = 0;i<100;i++)
    {
        d[i] = infinity;
    }
    data u,v;
    u.city =source;
    u.dist = 0;
    d[source] = 0;
    priority_queue<data>q;
    q.push(u);

   while(!q.empty())
   {
       u = q.top();
       q.pop();

       for(int i = 0;i<(int)graph[u.city].size();i++)
       {
           v.city = graph[u.city][i];
           v.dist = cost[u.city][i] + d[u.city];

           if(v.dist<d[v.city])
           {
               d[v.city] = v.dist;
               parent[v.city]=u.city;
               q.push(v);
           }
       }
   }
   return d[destination];
}
int main()
{
    int node,edge,a,b,cst,source,destination;

    cout<<"enter the number of nodes and edges : ";
    cin>>node>>edge;

    cout<<"enter the nodes and their cost ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;
        graph[a].push_back(b);
        graph[b].push_back(a);
        cost[a].push_back(cst);
        cost[b].push_back(cst);
    }
    cout<<"enter the source and destination ";
    cin>>source>>destination;
    int result  = dijkstra(source,destination);
    cout<<" the result is " <<result;

    int p = destination;
    while(1)
    {
        cout<<parent[p]<<" " ;
        p = parent[p];
        if(p==source)
            break;
    }
    return 0;
}
