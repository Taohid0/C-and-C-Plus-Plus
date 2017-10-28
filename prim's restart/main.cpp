#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int> > graph[100];
priority_queue<pair<int,int> >pq;
int visited[100]={0};

void prims(int src)
{
    visited[src]=1;
  for(int i=0;i<(int)graph[src].size();i++)
  {
      pair<int,int>v=graph[src][i];
      if(!visited[v.second])
      {
         pq.push(make_pair(-v.first,v.second));
      }
  }
}

int main()
{

    int node,edge,u,v,cost;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>cost;
        graph[u].push_back(make_pair(cost,v));
        graph[v].push_back(make_pair(cost,u));
    }
    int r=0;
    prims(1);
    while(!pq.empty()){
        pair<int,int> v2=pq.top();
        pq.pop();
        if(visited[v2.second]==0)
        {
            r+=-v2.first;
            prims(v2.second);
        }
    }
    cout<<r;
    return 0;
}
