#include <bits/stdc++.h>

using namespace std;

int edge[100][100];



void floyed_warshal(int edg)


{   for(int i = 0;i<edg;i++)
     {
         for(int j = 0;j<edg;j++)
         {
             for(int k = 0;k<edg;k++)
             {
                 if(edge[j][k]>edge[j][i]+edge[i][j]){

                   edge[j][k] = edge[j] [i]+edge[i][j];
                 }
             }
         }
     }
}

int main()
{  int edg,node,cst,a,b;
     for(int i =0;i<100;i++)
     {
    for(int j = 0;j<100;j++)
    {
        edge[i][j] = 99999999;
    }
      }
    cout<<"enter the number of edges and nodes ";
    cin>>edg>>node;

    for(int i = 0;i<edg;i++)
    {
        cin>>a>>b>>cst;
        edge[a][b] = cst;
        edge[b][a] = cst;
    }
     floyed_warshal(edg+1);
    for(int i = 0;i<edg;i++)
    {
        for(int j  = 0;j<edg;j++)
        {
            cout<<i << " "<<j<< "   : "<<edge[i][j];
            cout<<endl;
        }
    }


    return 0;
}
