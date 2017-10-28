#include <bits/stdc++.h>

using namespace std;


vector<int>edge[100],cost[100];


struct data{
int city,distance;

bool operator < (const data & p)const{
return distance>p.distance;
}
};

priority_queue<data>q;

int shortestPath(int source,int destination)
{
   vector<int>d;
   d.assign(100,99999999);

   data u,v;


   u.city = source;
   u.distance= 0;
  q.push(u);
  d[source]=  0;
   while(!q.empty())
   {
       u = q.top();
       q.pop();

       for(int i = 0;i<(int)edge[u.city].size();i++)
       {
           v.city = edge[u.city][i];
           v.distance = d[u.city]+cost[u.city][i];

           if(v.distance<d[v.city])
           {
               d[v.city] = v.distance;
               q.push(v);
           }
       }
   }
   return d[destination];
}

int main()
{
    int number_of_nodes,number_of_edges,u,v,c,src,des;

    cin>>number_of_nodes>>number_of_edges;

    for(int i =0;i<number_of_edges;i++)
    {
        cin>>u>>v>>c;
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(c);
        cost[v].push_back(c);
    }
    cin>>src>>des;
    int result = shortestPath(src,des);

    cout<<result;
    return 0;
}
