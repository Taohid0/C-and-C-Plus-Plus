#include <bits/stdc++.h>

using namespace std;

int edge_matrix[100][100];


int main()
{
    int node,edge,u,v,cost;


      for(int i = 1;i<100;i++)
    {
        for(int j =1;j<100;j++)
        {


                edge_matrix[i][j] = 999999;

        }
    }


  // freopen("a.txt","r",stdin);

    cin>>node>>edge;

    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v>>cost;

        edge_matrix[u][v] = cost;

    }


    for(int i = 1;i<=node;i++)
    {
        for(int j = 1;j<=node;j++)
        {
            for(int k = 1;k<=node;k++)
            {
                if(edge_matrix[j][k]>edge_matrix[j][i]+edge_matrix[i][k])
                {
                    edge_matrix[j][k]=edge_matrix[j][i]+edge_matrix[i][k];

                }
            }
        }
    }
 for(int i = 1;i<=node;i++)
    {
        for(int j =1;j<=node;j++)
        {
                if(i!=j)

                cout<<i<< " "<<j<<" "<<edge_matrix[i][j]<<"\n";
        }
    }
    return 0;
}
