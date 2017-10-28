#include <bits/stdc++.h>

using namespace std;

int main()
{
    int node,edge;
    int d[100],edge_u[100],edge_v[100],cost[100];

    for(int i = 0;i<100;i++)
    {
        d[i] = 100000;
    }
    d[1] = 0;
    cout<<"enter the number of nodes and edges : " ;
    cin>>node>>edge;

    cout<<"enter the edges and their costs : ";

    for(int i=1;i<=edge;i++ )
    {
        cin>>edge_u[i]>>edge_v[i]>>cost[i];
    }

    bool neg_cycle = false;

        for(int i = 1;i<=node;i++)
        {
            bool updated = false;

            for(int j = 1;j<=edge;j++)
            {
                int u = edge_u[i];
                int v = edge_v[i];

                if(d[u]+cost[i]<d[v])
                {
                    d[v] = d[u]+cost[i];
                    updated = true;if(i==node)
            {
                neg_cycle = true;
            }
                }
            }
            if(updated==false)
            {
                break;
            }}


        if(neg_cycle==false)
        {
            for(int i =1;i<=node;i++)
            {
                cout<<d[i]<<" ";
            }
        }
        else
            puts("negative circle found ");
    return 0;
}
