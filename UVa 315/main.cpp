#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1001];
vector<int>parent;
vector<int>dfsNum;
vector<int>dfsLow;
//vector<bool>visited;
vector<bool>points;

int rootDfs,child,placeHolder;

void articulationPointFind(int u)
{  int v;
    dfsLow[u] =dfsNum[u] =placeHolder++;

    for(int i = 0;i<(int)graph[u].size();i++)
    {
        v = graph[u][i];
        if(dfsNum[v]==-1)
        {

        if(u==rootDfs)
        {
            child++;
        }
            parent[v] =u;
            articulationPointFind(v);

            if(dfsLow[v]>=dfsNum[u])
            {
                points[u] =true;
            }
            dfsLow[u] = min(dfsLow[u],dfsLow[v]);
        }
        else if(v!=parent[u])
        {
            dfsLow[u]=  min(dfsLow[u],dfsNum[v]);
        }
    }
}

int main()
{
    string line;
    int n,u,v;

    while(cin>>n)
    {getchar();
     placeHolder =0;
        if(!n)break;
        for(int i=0;i<1001;i++)
        {
            graph[i].clear();
        }
        dfsNum.assign(101,0);
        dfsLow.assign(101,-1);
        parent.assign(101,0);
        //visited.assign(101,false);
        points.assign(101,false);


         while(getline(cin,line))
         {
             stringstream ss(line);
             ss>>u;
             if(!u)break;
             while(ss>>v)
             {
                 graph[u].push_back(v);
                 graph[v].push_back(u);
                // cout<<u<<"-"<<v<<endl;
             }
         }
         rootDfs = 0;
         child = 0;
         articulationPointFind(0);
         if(child>1)points[rootDfs] = true;

          int r = 0;
        for(int i = 0;i<101;i++)
        {
          //  cout<<i<< " "<<points[i]<<" ";
            if(points[i])
               r++;
        }
        //cout<<"child "<<child<<endl;
        cout<<r<<endl;

    }
    return 0;
}
