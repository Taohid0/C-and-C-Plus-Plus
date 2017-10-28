#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int> > edgeList[100];

int main()
{
    int minCost[100];
    int node,edge,u,v,cost;



    freopen("aa.txt","r",stdin);

    cin>>node>>edge;

    for(int i = 0; i<edge; i++)
    {
        cin>>u>>v>>cost;
        edgeList[u].push_back(make_pair(v,cost));

    }
    minCost[node]=0;

    for(int i = node-1; i>=1; i--)
    {
        int minimum ;

        if((int)edgeList[i].size()>0)
        {
            minimum=edgeList[i][0].second+minCost[edgeList[i][0].first];

     }

        for(int j = 0; j<(int)edgeList[i].size(); j++)
        {
            if(minimum>edgeList[i][j].second+minCost[edgeList[i][j].first])
            {
                minimum=edgeList[i][j].second+minCost[edgeList[i][j].first];

            }
        }

        minCost[i] = minimum;

    }

    cout<<minCost[1]<<endl;



    return 0;
}
