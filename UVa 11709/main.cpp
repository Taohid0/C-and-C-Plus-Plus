#include <bits/stdc++.h>

using namespace std;
vector<int>graph[1001];
int components;
vector<int>dfsNum;
vector<int>dfsLow;
vector<int>s;
vector<int>visited;
int counter;
int UNVISITED = -1;
void tarjanSCC(int u)
{
    dfsLow[u] =dfsNum[u] =counter++;
    s.push_back(u);
    visited[u] = 1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
          int v =graph[u][i];
          if(dfsNum[v]==UNVISITED)
          {
              tarjanSCC(v);
          }
          if(visited[v])
          {
              dfsLow[u]=  min(dfsLow[u],dfsLow[v]);
          }
    }
          if(dfsLow[u]==dfsNum[u])
          {
              components++;
              while(1)
              {
                  int v= s.back();
                  s.pop_back();
                  visited[v] =0;
                  if(u==v)break;
              }

    }
}
int main()
{
    int node,edge;
    string u,u1,v,v1;
    map<string,int>mp;
    int indx;
    while(1)
    {
        s.clear();
        mp.clear();
        for(int i = 0;i<1001;i++)
        {
            graph[i].clear();
        }
        counter = 0;
        components = 0;
        indx =0;
        cin>>node>>edge;
        getchar();
        if(!node && !edge)break;
        for(int i = 0;i<node;i++)
        {
            cin>>u>>u1;
            u+=u1;
            cout<<u<<endl;
            if(!mp[u])mp[u] = indx++;
        }
        for(int i = 0;i<edge;i++)
        {
            cin>>u>>u1>>v>>v1;
            u+=u1;
            v+=v1;

            graph[mp[u]].push_back(mp[v]);
        }
        dfsLow.assign(1001,0);
        dfsNum.assign(1001,UNVISITED);
        visited.assign(1001,0);
        for(int i = 0;i<indx;i++)
        {
            if(dfsNum[i]==UNVISITED)
                tarjanSCC(i);
        }
        cout<<components<<endl;
    }
    return 0;
}
