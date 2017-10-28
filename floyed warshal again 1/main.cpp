#include <bits/stdc++.h>

using namespace std;
int graph[100][100];

int main()
{  int node,edge,a,b,cst;

for(int i = 0;i<100;i++)
{
    for(int j = 0;j<100;j++)
    {
        graph[i][j] = 100000;
    }
}

  cout<<"enter the number of nodes and edges : ";
  cin>> node>>edge;

  cout<<"enter the edges and their costs : ";

  for(int i = 0;i<edge;i++)
  {
      cin>>a>>b>>cst;
      graph[a][b] = cst;
      graph[b][a] = cst;
  }

  for(int k = 1;k<=edge;k++)
  {
      for(int j = 1;j<=edge;j++)
      {
          for(int i = 1;i<=edge;i++)
          {
              if(graph[j][i]>graph[j][k] + graph[k][i])
                graph[j][i]=graph[j][k] + graph[k][i];
          }
      }

  }for(int i = 1;i<=edge;i++)
      {
          for(int j = 1;j<=edge;j++)
            {
                cout<<i <<" " <<j<<" = "<<graph[i][j]<<endl;
            }
      }
}
