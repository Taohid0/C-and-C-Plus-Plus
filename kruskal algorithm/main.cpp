#include <bits/stdc++.h>

using namespace std;


struct data
{
    int u,v,cost;

    bool operator < (const data & p) const
    {
        return cost<p.cost;
    }
};

int parent[100] ;
int find_parent(int r)
{
    if(parent[r]==r)
    {
        return r;
    }
    parent[r] = find_parent(parent[r]);

    return find_parent(parent[r]);
}

vector<data>p;
int kruskal(int node)
{
    sort(p.begin(),p.end());
    int sum = 0,count= 0;

    for (int i = 1;i<=node;i++)
    {
        parent[i] = i;
    }

  for(int i = 0;i<(int)p.size();i++)
  {
      int u = find_parent(p[i].u);
      int v = find_parent(p[i].v);
      if(u!=v)
      {
          parent[u] = v;
          count++;
          sum+=p[i].cost;
          cout<<p[i].cost<< " ";
      }
if(count==node-1)break;
  }
  return sum;
}


int main()
{  int node,edge,result;
    data d;

    freopen("E:/test.txt","r",stdin);
   // cout<<"enter the number of nodes and edges ";
    cin>>node>>edge;

    //cout<<"enter the edges and costs ";

    for(int i = 0;i<edge;i++)
    {
        cin>>d.u>>d.v>>d.cost;
        p.push_back(d);
    }

    result = kruskal(node);

    cout<<result;
    return 0;
}
