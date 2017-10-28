#include <bits/stdc++.h>

using namespace std;

priority_queue<pair <int,int> >pq;
vector<bool>visited;
vector<pair<int,int> > adjacencyList[100];

void process(int vertex)
{
    visited[vertex] = true;

    for(int i = 0;i<(int)adjacencyList[vertex].size();i++)
    {

        pair <int,int>tempPair = adjacencyList[vertex][i];

        if(!visited[tempPair.second]){

        pq.push(make_pair(-tempPair.first,-tempPair.second));
        }
    }
}
int main()
{
    freopen("aa.txt","r",stdin);

    int n,edge;
    int u,v,cost,minCost = 0;

    cin>>n>>edge;
    visited.assign(1000,0);

    while(edge--)
    {
        cin>>u>>v>>cost;
        adjacencyList[u].push_back(make_pair(cost,v));
        adjacencyList[v].push_back(make_pair(cost,u));

    }

    process(u);

    while(!pq.empty())
    {
      pair<int,int>pr;
      pr = pq.top();
      pq.pop();
      if(!visited[-pr.second])
      {
          minCost+=-pr.first;
          process(-pr.second);
      }
    }
    cout<<minCost;


    return 0;
}
