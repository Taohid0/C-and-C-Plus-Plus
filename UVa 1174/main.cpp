#include <bits/stdc++.h>

using namespace std;
int parent[10000];
int find_parent(int n)
{
    if(n==parent[n])return n;

    parent[n]= find_parent(parent[n]);

    return find_parent(parent[n]);
}

struct data{
              int u,v,cost;

              bool operator < (const data & b)const
              {
                  return cost<b.cost;
              }
              };

int main()
{
    data d;
    priority_queue<data>pq;
    int test,node,edge,c;
    string src,des;
    map<string,int>m;
    cin>>test;
    while(test--)
    {   int r = 0;
        int takenEdge = 0;
        for(int i  =0;i<10000;i++)
        {
            parent[i] =i;
        }
        int indx= 1;
        cin>>node>>edge;
        while(edge--)
        {
         cin>>src>>des>>c;
         if(!m[src])m[src] = indx++;
         if(!m[des])m[des] = indx++;
         d.u = m[src];
         d.v = m[des];
         d.cost= -c;
         pq.push(d);
        }
        while(!pq.empty())
        {
            d = pq.top();
            pq.pop();
            int parU = find_parent(d.u);
            int parV =find_parent(d.v);

            if(parU!=parV)
            {

                r+=-d.cost;
                parent[d.u] = d.v;
                takenEdge++;
                cout<<parent[d.u]<<" "<<parent[d.v]<<" "<<parU<<" "<<parV<<endl;

            }

        }
        cout<<r<<endl;
        if(test)cout<<endl;
    }
    return 0;
}
