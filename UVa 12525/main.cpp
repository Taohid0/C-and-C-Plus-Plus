#include <bits/stdc++.h>

using namespace std;
long long unsigned inf = 1LL<<60;
int main()
{
    int test,t,node,edge,c,u,v,q;
    pair<long long unsigned,long long unsigned> graph[101][101];
    cin>>test;
    while(test--)
    {
       for(int i = 0;i<101;i++)
       {
           for(int j = 0;j<101;j++)
           {  if(i==j)
           {
                graph[i][j].first = 0;
                graph[j][i].first = 0;
               graph[i][j].second =0;
               graph[j][i].second = 0;
           }
             else
             {graph[i][j].first = inf;
              graph[j][i].first = inf;
               graph[i][j].second =inf;
               graph[j][i].second = inf;
             }
           }
       }
        cin>>node>>edge;
          while(edge--)
          {
              cin>>u>>v>>t>>c;
              graph[u][v].first = t;
              graph[v][u].first = t;
              graph[u][v].second=  c;
              graph[v][u].second = c;
          }

          for(int i=1;i<=node;i++)
          {
              for(int j = 1;j<=node;j++)
              {
                  for(int k=1;k<=node;k++)
                  {
                      if(graph[j][k].first>=graph[j][i].first+graph[i][k].first)
                      {
                          graph[j][k].first = graph[j][i].first+graph[i][k].first;
                          graph[j][k].second =graph[j][i].second+graph[i][k].second;

                      }
//                      else if(graph[j][k].first==graph[j][i].first+graph[i][k].first &&
//                               graph[j][k].second>graph[j][i].second+graph[i][k].second)
//                      {
//                         // graph[j][k].first = graph[j][i].first+graph[i][k].first;
//                          graph[j][k].second =graph[j][i].second+graph[i][k].second;
//                      }
                  }
              }
          }
          cin>>q;
          while(q--)
          {
              cin>>u>>v;
              if(graph[u][v].first==inf)cout<<"No Path."<<endl;
              else
                cout<<"Distance and time to reach destination is "<<graph[u][v].second<<" & "<<graph[u][v].first<<"."<<endl;
          }
          if(test)cout<<endl;
    }
    return 0;
}
