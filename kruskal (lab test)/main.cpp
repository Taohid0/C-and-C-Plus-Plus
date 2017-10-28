#include <bits/stdc++.h>

using namespace std;

struct data{
int u,v,cost;

bool operator < (const data & p)const
{
    return p.cost<cost;
}

}d;
int parent[100];
  priority_queue<data>pq;

int find(int r)
{
    if(parent[r]==r)
        return r;

    parent[r] = find(parent[r]);
    return find(parent[r]);
}

int main()
{  int total_cost = 0;
    for(int i = 0;i<100;i++)
    {
        parent[i] = i;
    }
    int n,e;

    freopen("aa.txt","r",stdin);
    cin>>n>>e;

    for(int i = 0;i<e;i++)
{

    cin>>d.u>>d.v>>d.cost;
    pq.push(d);
}

while(!pq.empty()){
    data temp = pq.top();
    pq.pop();

    int u = temp.u;
    int v = temp.v;

    if(find(u)!=find(v))
    { cout<<temp.cost<< " ";
        //cout<<find(u)<< " "<<find(v)<<endl;
       parent[find(v)] =parent[find(u)];
        total_cost+=temp.cost;
    }
}
cout<<total_cost;




    return 0;
}
