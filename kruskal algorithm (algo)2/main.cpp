#include <bits/stdc++.h>

using namespace std;

vector< pair<int,pair<int,int> > > edgeList;


int parent[100];
int parent_find(int r)
{
    if(r==parent[r])
        return r;
    parent[r] = parent_find(parent[r]);

    return parent_find(parent[r]);
}

int kruskal(int node,int edge)
{
    for(int i =0;i<100;i++)
    {
        parent[i] = i;
    }
    int minCost = 0;


    for(int i=0;i<edge;i++)
    {
        pair< int,pair<int,int> >temp = edgeList[i];

        int u = parent_find(temp.second.first);
        int v = parent_find(temp.second.second);
        if(u!=v)
        {
            minCost += temp.first;
            parent[v] =parent[u];


        }
    }
    return minCost;
}


int main()
{

   int nodes,edges,u,v,cost;
  // freopen("aa.txt","r",stdin);
   cin>>edges;

   for(int i = 0;i<edges;i++)
   {
       cin>>u>>v>>cost;

       edgeList.push_back(make_pair(cost,make_pair(u,v)));
   }
   sort(edgeList.begin(),edgeList.end());


   int result = kruskal(nodes,edges);

   cout<<result;
    return 0;
}
