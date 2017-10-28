#include <bits/stdc++.h>

using namespace std;

int main()
{
    int node,edge,edge_u[100],edge_v[100],cost[100],d[100];

    for(int i = 0;i<100;i++)
    {
        d[i]=100000;
    }
    d[1]  =0;

    cout<<"enter the number of nodes and edges : ";
    cin>>node>>edge;

    cout<<"enter the edges and their costs : ";

    for(int i = 1;i<=edge;i++)
    {
        cin>>edge_u[i]>>edge_v[i]>>cost[i];
    }
    bool negative_cycle = false;

    for(int step = 1;step<=node;step++)
    {
        bool updated =  false;

        for(int i = 1;i<=edge;i++)
        {  int u = edge_u[i];
           int v = edge_v[i];

            if(d[u]+cost[i]<d[v])
            {
                d[v] = d[u]+cost[i];
                updated  = true;
                if(step==node)
                {
                    negative_cycle = true;
                }
            }
        }
        if(updated ==false)
        {
            break;
        }
    }
    if(!negative_cycle)
        for(int i = 1;i<=node;i++)
    {
        cout<<i<< " "<<d[i]<<endl;
    }
    else
        cout<<"negative cycle found ";

    return 0;
}
