#include <bits/stdc++.h>

using namespace std;
int parent[1000001];
struct data{
           int u,v,cost;

           bool operator< (const data&b)const{
            return cost>b.cost;

            }}
            ;
int disJoint(int n)
{
    if(parent[n]==n)return n;

    parent[n] = disJoint(parent[n]);
    return disJoint(parent[n]);
}
priority_queue<data>pq;


int main()
{
   // ios::sync_with_stdio(false);
    int u,v,c,prevCost,presentCost,N,M,k;
    data d;
    bool tag = false;
    while(cin>>N)
    {   for(int i = 0;i<1000001;i++)
            {
                parent[i] = i;
            }
        prevCost = 0;
        presentCost = 0;
        for(int i = 1;i<N;i++)
        {
            cin>>u>>v>>c;
            prevCost+=c;
        }
        cin>>k;
        for(int i = 1;i<=k;i++)
        {
            cin>>u>>v>>c;
            d.u = u;
            d.v = v;
            d.cost = c;
            pq.push(d);
        }
        cin>>M;
        for(int i = 1;i<=M;i++)
        {
            cin>>u>>v>>c;
            d.u = u;
            d.v = v;
            d.cost = c;
            pq.push(d);
        }

        while(!pq.empty())
        {

             d = pq.top();
            pq.pop();
          // cout<<d.u<<" "<<d.v<<" "<<d.cost<<endl;
                u = disJoint(d.u);
                v = disJoint(d.v);
            if(u!=v)
            {

                parent[u] = v;
                presentCost+=d.cost;
            }

        }
        if(tag)
            cout<<endl;
        cout<<prevCost<<endl<<presentCost<<endl;

        tag = true;

    }
    return 0;
}
