#include <bits/stdc++.h>
using namespace std;

int dist[1000][1000];

int main()
{
   int node,edge,u,v,cost;
   vector<pair<int,int> >graph[1000];
   cin>>node>>edge;
   for(int i = 0;i<1000;i++)
   {
       for(int j = 0;j<1000;j++)
       {
           dist[i][j]=99999;
       }
   }
   while(edge--)
   {
       cin>>u>>v>>cost;
       dist[u][v] =cost;
       dist[v][u]=cost;
       dist[u][u]=0;
       dist[v][v]=0;
   }

   for(int i = 1;i<=node;i++)
   {
       for(int j = 1;j<=node;j++)
       {
           for(int k = 1;k<=node;k++)
           {
               dist[j][k] = min(dist[j][k],dist[j][i]+dist[i][k]);
           }
       }
   }
   cout<<endl;
   for(int i =1;i<=node;i++)
   {
       for(int j = 1;j<=node;j++)
       {
           cout<<i <<" "<<j<< " "<<dist[i][j]<<endl;
       }
       cout<<endl;
   }
    return 0;
}
