#include <bits/stdc++.h>

using namespace std;

vector<int>graph[2001];
vector<int>dfsNum;
vector<int>dfsLow;
vector<bool>visited;
int counter;
bool flag ;
int c;
//dhurrrrrrrrrrr
void tarjanSCC(int u)
{
    dfsLow[u] = dfsNum[u] = counter++;
    visited[u] = 1;
    for(int i=0;i<(int)graph[u].size();i++)
    {
       int v =graph[u][i];
       if(dfsNum[v]==-1 && !flag)
          tarjanSCC(v);

       if(visited[v])
       {
           dfsLow[u] = min(dfsLow[u],dfsLow[v]);
       }
       if(dfsLow[u]==dfsNum[u])
       {
           flag = true;
           break;
       }
    }

}

int main()
{

    int node,edge,u,v,p;

    while(cin>>node>>edge)
    {
         flag = false;
        if(!node && !edge)break;

        for(int i =0;i<2001;i++)
            graph[i].clear();

        while(edge--)
        {
            cin>>u>>v>>p;
            if(p==1)
                graph[u].push_back(v);

            else
            {
                graph[u].push_back(v);
                graph[v].push_back(u);
        }
        }

        dfsNum.assign(2001,-1);
        dfsLow.assign(2001,0);
        visited.assign(2001,0);
        counter =0;

        for(int i = 1;i<=node;i++)
        {
            if(dfsNum[i]==-1)
            {
                tarjanSCC(i);
            }
        }

        if(flag)cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
