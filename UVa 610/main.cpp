#include <bits/stdc++.h>

using namespace std;
vector<int>graph[1001];
vector<int>dfsNum,dfsLow,parent;
int counter;
int ans[1001][1001];
//ei code a error ase
void articulationFind(int u)
{
    int v;
    dfsNum[u] =dfsLow[u] =counter++;
    for(int i =0;i<(int)graph[u].size();i++)
    {
        v = graph[u][i];

        if(dfsNum[v]==-1 && ans[u][v])
        { parent[v] = u;
            articulationFind(v);
            if(dfsLow[v]>dfsNum[u])
            {
               ans[v][u] =ans[u][v] = 1;
            }
            dfsLow[u] =min(dfsLow[u],dfsLow[v]);
        }
        else if(v!=parent[u])
        {
            dfsLow[u] =min(dfsLow[u],dfsNum[v]);

        }
    }
}

int main()
{
    int node,edge,u,v,c = 1;


    while(cin>>node>>edge){
          memset(ans,0,sizeof(ans));
   for(int i = 0;i<1001;i++)
   {
       graph[i].clear();
   }
    if(!node && !edge)break;
    dfsNum.assign(1001,-1);
    dfsLow.assign(1001,0);
    parent.assign(1001,0);
    counter = 0;
    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        ans[u][v] =1;



    }

    articulationFind(1);

    cout<<c++<<endl<<endl;
     for(int i = 1;i<=node;i++)
     {
         for(int j = 1;j<=node;j++)
         {
             if(ans[i][j])
             {
                 cout<<i<<" "<<j<<endl;
             }
         }
     }
     cout<<'#'<<endl;

    }
    return 0;
}
