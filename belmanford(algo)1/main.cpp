#include <iostream>

using namespace std;

int main()
{
    vector<int>e[100],cost[100];
    int node,edge,u,v,c;
    vector<int>d;
    d.assign(100,1000000);

    cin>>node>>edge;

    for(int i = 0;i<edge;i++)
    {
        cin>>u>>v>>c;
        e[u].push_back(v);
        e[v].push_back(u);
        cost[u].push_back(c);
    }

    for(int j=0;j<n;j++)
    {
         bool test =false;

         for(int i = 0;i<node;i++)
         {
             for(int k = 0;k<(int)e[i].size();k++)
             {
                 if(d[e[i][k]]>d[i]+cost[i][k])
                 {
                     d[e[i][k]] = d[[e[i][k]]+cost[i][k];
                 }
             }
         }
    }

    return 0;
}
