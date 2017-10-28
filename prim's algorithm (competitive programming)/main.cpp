#include <bits/stdc++.h>

using namespace std;

vector<int>taken;
vector<pair<int,int> >adjList[100];
priority_queue<pair<int,int> > pq;

void process(int vtx)
{
    taken[vtx] = 1;

    for(int i = 0;i<(int)adjList[vtx].size();i++)
    {
        pair<int,int> v = adjList[vtx][i];

        if(!taken[v.first])
        {
            pq.push(pair<int,int>(-v.second,-v.first));
        }
    }
}
int main()
{
     int n,e,v,u,value;
     taken.assign(100,0);

     freopen("E:/test.txt","r",stdin);

   // cout<<"enter the number of nodes and edges ";
    cin>>n>>e;

  //  cout<<"enter the edges and their costs ";

    for(int i = 0;i<e;i++)
    {
        cin>>u>>v>>value;
        adjList[u].push_back(make_pair(v,value));
    adjList[v].push_back(make_pair(u,value));
    }



    /*  for(int i=1;i<=n;i++)
  {
       for(int j=0;j<(int)adjList[i].size();j++)
       {
           cout<<""<<i<<"  "<<adjList[i][j].first;
           cout<<" "<<adjList[i][j].second<<endl;
       }
   }*/



         process(1);
         int mst_cost = 0;

         while(!pq.empty())
         {
             pair<int,int>frnt = pq.top();
             pq.pop();

             int u = -frnt.second;
             int w = -frnt.first;
             if(!taken[u])
             {
                 mst_cost+=w;
                 process(u);
                 cout<<w<< " ";
             }


         }cout<<mst_cost;
    return 0;
}
