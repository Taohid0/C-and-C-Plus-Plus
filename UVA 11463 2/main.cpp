#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,src,edge,node,des,path[101][101],cas = 1;


    cin>>t;

    while(t--)
    {
       cin>>node>>edge;


       for(int i = 0;i<node;i++)
       {
           for(int j = 0;j<node;j++)
           {
               if(i==j)
               {
                   path[i][j] = 0;
               }
               else
                path[i][j] = 100000;
           }
       }


          for(int k = 0;k<edge;k++)
          {
              int u,v;

              cin>>u>>v;
              path[u][v] = 1;
              path[v][u] = 1;

          }

          for(int a = 0;a<node;a++)
          {
              for(int b = 0;b<node;b++)

                for(int c = 0;c<node;c++)
              {
                  if(path[b][c]>path[b][a]+path[a][c])
                  {
                      path[b][c]=path[b][a]+path[a][c];
                  }
              }
          }
          cin>>src>>des;
          int max = 0;
          for(int a  =0;a<node;a++)
          {
              if(max<path[src][a]+path[a][des])
              {
                  max = path[src][a]+path[a][des];
              }
          }

          printf("Case %d: %d",cas++,max);
        if(t>0) cout<<endl;

    }
    return 0;
}
