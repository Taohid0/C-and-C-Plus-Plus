#include <bits/stdc++.h>

using namespace std;

vector<int>parent;
int f=0,mf=0,source,sink;int residual[1001][1001];

void augmentes(int v,int minEdge)
{


    if(v==source)
    {
        f = minEdge;
        return;
    }
    else if(parent[v]!=-1)
    {
        augmentes(parent[v],min(minEdge,residual[parent[v]][v]));
        residual[parent[v]][v]-=f;
        residual[v][parent[v]]+=f;
    }

}
int main()
{
    int node,edge,cost,u,v;

    int counter =1;
    while(true)
    {
        vector<int >graph[1001];
        parent.assign(10001,-1);
        mf=0;
        memset(residual,0,sizeof residual);
        cin>>node;
        if(!node)
        {
            break;
        }
        cin>>source>>sink>>edge;
        while(edge--)

        {
            cin>>u>>v>>cost;
            graph[u].push_back(v);
            graph[v].push_back(u);
            residual[u][v] += cost;
            residual[v][u] += cost;
        }

        while(1)
        {
            f = 0;
            bitset<10000>visited;
            queue<int>q;
            q.push(source);
            visited[source]=true;

            while(!q.empty())
            {
                u = q.front();
                q.pop();
                if(u==sink)break;
                for(int i = 0;i<(int)graph[u].size();i++)
                {
                    v= graph[u][i];
                    if(residual[u][v]>0 and !visited[v])
                    {
                        q.push(v);
                        visited[v] = true;
                        parent[v] = u;
                    }

                }
            }
            augmentes(sink,INT_MAX);
            if(f==0)
                break;
            mf+=f;
        }
        cout<<"Network "<<counter++<<endl;
        cout<<"The bandwidth is "<<mf<<"."<<endl<<endl;
    }
    return 0;
}
