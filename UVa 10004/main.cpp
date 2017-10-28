#include <bits/stdc++.h>

using namespace std;
int const inf =  9999999;
vector<int>adjList[1000];

bool bfs(int source)
{
    queue<int>q;
    vector<int>color;
    color.assign(10000,inf);
    bool isBipartite = true;
    q.push(source);
    color[source] = 0;

    while(!q.empty() && isBipartite)
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<(int)adjList[u].size();i++)
        {
            int v = adjList[u][i];

            if(color[v] ==inf)
            {
                color[v] = 1-color[u];
                q.push(v);
            }
            else if(color[u]==color[v])
            {
                isBipartite = false;
                break;
            }
        }

    }
 return isBipartite;

}

int main()
{
    int edge,node,u,v,source;


    while(true)
    {    source = -1;

       // adjList.clear();
        cin>>node;
        if(node==0)
        {
            break;
        }
        cin>>edge;

        while(edge--)
        {
         cin>>u>>v;
         if(source==-1)
         {
             source=u;
         }

         adjList[u].push_back(v);
         adjList[v].push_back(u);
        }

        bool result = bfs(source);

        if(result)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
            cout<<"NOT BICOLORABLE."<<endl;
         for(int i = 0;i<1000;i++)
         {
             adjList[i].clear();
         }
            }
    return 0;
}
