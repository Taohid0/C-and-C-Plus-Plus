#include <bits/stdc++.h>

using namespace std;
vector<int>graph[1001];
vector<int>dfsNum;
vector<int>dfsLow;
vector<int>parent;
int counter;
vector<pair<int,int> >vp;
int UNVISITED = -1;
void dfs(int u)
{
    dfsLow[u] = dfsNum[u] = counter++;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v =  graph[u][i];
        if(dfsNum[v]==UNVISITED)
        {
            parent[v] = u;
            dfs(v);

            if(dfsLow[v]>dfsNum[u])
            {
                vp.push_back(make_pair(min(u,v),max(u,v)));
            }
            dfsLow[u]= min(dfsLow[u],dfsLow[v]);
        }
        else if(v!=parent[u])
        {
            dfsLow[u] = min(dfsLow[u],dfsNum[v]);
        }
    }
}

int main()
{
   //ios::sync_with_stdio(false);
   int node,u,v,n;
   while(cin>>node)
   {
            vp.clear();
            for(int g = 0;g<1001;g++)
            {
                graph[g].clear();
            }
           for(int i = 0;i<node;i++)
           {
               scanf("%d (%d)",&u,&n);

               for(int j= 0;j<n;j++){
               cin>>v;
               graph[u].push_back(v);
               graph[v].push_back(u);

           }
           }
           dfsNum.assign(1001,UNVISITED);
           dfsLow.assign(1001,0);
           parent.assign(1001,0);
           counter = 0;
           for(int i = 0;i<node;i++)
           {
               if(dfsNum[i]==UNVISITED)
               {
                   dfs(i);
               }
           }

           sort(vp.begin(),vp.end());
           int len = (int)vp.size();
           cout<<len<<" critical links"<<endl;
           for(int i = 0;i<len;i++)
           {
               cout<<vp[i].first<<" - "<<vp[i].second<<endl;
           }
        cout<<endl;

   }
    return 0;
}
