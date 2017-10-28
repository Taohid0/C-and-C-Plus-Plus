#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100],cost[100];

struct data{
        int city,dist;
        bool operator < (const data & p) const{
        return dist>p.dist;
        }
        };
    int dijkstra(int source,int destination)
    {
        int d[100];

        for(int i = 0;i<100;i++)
        {
          d[i] = 10000000;
        }
        data u,v;

        priority_queue<data>q;

        u.city = source;
        u.dist = 0;
        q.push(u);
        d[source] = 0;

        while(!q.empty())
        {
            u = q.top();
            q.pop();

            for(int i = 0;i<(int)graph[u.city].size();i++)
            {
                v.city = graph[u.city][i];
                v.dist = cost[u.city][i]  + d[u.city];

                if(v.dist<d[v.city])
                {
                    d[v.city] = v.dist;
                    q.push(v);
                }
            }
        }
        return d[destination];
    }

int main()
{   int node,cst,a,source,destination,b,edge;

    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edge;

    cout<<"enter the edges and their costs : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;
        graph[a].push_back(b);
        graph[b].push_back(a);
        cost[a].push_back(cst);
        cost[b].push_back(cst);
    }

    cout<<" enter the source and destination : ";
    cin>>source>>destination;

    int result = dijkstra(source,destination);

    cout<<result;
    return 0;
}
