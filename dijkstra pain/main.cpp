#include <bits/stdc++.h>

using namespace std;
vector<int> edge[100],cost[100];




struct data {
           int city,dist;

           bool operator < (const data& p) const{
           return dist>p.dist;
           }
           };

int dijkstra (int source,int destination )
{
    int d[100];
    data u,v;
    priority_queue<data>q;
     for(int i = 0;i<100;i++)
     {
         d[i] = 10000000;
     }
     u.city  = source;
     u.dist=  0;

     q.push(u);
     d[source] = 0;

     while(!q.empty())
     {
         u = q.top();
         q.pop();

         for(int i = 0;i<(int)edge[u.city].size();i++)
         {
             v.city = edge[u.city][i];
             v.dist  = cost[u.city][i] + d[u.city];

             if(d[v.city]>v.dist)
             {
                 d[v.city] = v.dist;
                 q.push(v);
             }
         }
     }
     return d[destination];
}
int main()
{
    int node,edge,cst,source,destination,a,b;


    cout<<"enter the number of nodes and edges : "<<endl;
    cin>>node>>edge;

    cout<<"enter the nodes and their cost : "<<endl;

     for(int i = 0;i<edge;i++)
     {
         cin>>a>>b>>cst;

         edge[a].push_back(b);
     }
    return 0;
}