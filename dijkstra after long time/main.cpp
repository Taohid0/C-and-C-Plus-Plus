#include <bits/stdc++.h>

using namespace std;


vector<int>edge[100],cost[100];
const int infinity = 999999999;

 struct data{
        int city,dist;

        bool operator < (const data & p)const {
        return dist>p.dist;
        }
        };

int dijkstra(int source,int destination){
          int d[100];
           int sum = 0;
          for(int i = 0;i<100;i++)
            {
                d[i] = infinity;
            }
            d[source]  = 0;

            data u,v;

            u.city =source;
            u.dist = 0;

            priority_queue<data>q;

            q.push(u);

            while(!q.empty())
            {
                u = q.top();q.pop();

                for(int i = 0;i<(int)edge[u.city].size();i++)
                {
                    v.city = edge[u.city][i];
                    v.dist = cost[u.city][i]+ d[u.city];

                    if(v.dist<d[v.city])
                    {
                        d[v.city] = v.dist;
                        sum+=d[v.city];

                        q.push(v);
                    }
                }
            }

            return sum;;
          }

int main()
{   int node,edg,source,destination,a,b,cst;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edg;

    cout<<"enter the edges and their costs ";

    for(int i = 1;i<=edg;i++)
    {
        cin>>a>>b>>cst;
        edge[a].push_back(b);
        edge[b].push_back(a);     //for bidirectional path
        cost[a].push_back(cst);
        cost[b].push_back(cst);
    }

    cout<<"enter the source and destination " ;
    cin>>source>>destination;

    int result = dijkstra(source,destination);
    cout<<result;
    return 0;
}
