#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];
vector<int>result;  int visited[100] = {0};
void topSort(int u)
{

            visited[u] = 1;

          for(int i= 0;i<(int)graph[u].size();i++)
          {
              int v = graph[u][i];
              if(visited[v]==0)
                topSort(v);
          }
          result.push_back(u);

}
int main()
{
   freopen("input.txt","r",stdin);
   int node,edge,u,v;
   cout<<"node and edge number : ";
   cin>>node>>edge;

   cout<<"edges :";
   for(int i=0;i<edge;i++)
   {
       cin>>u>>v;
       graph[u].push_back(v);

   }

   for(int i = 0;i<node;i++)
    if(visited[i]==0)
        topSort(i);

   for(int i = (int)result.size()-1;i>=0;i--)
    cout<<result[i]<< " ";

    return 0;
}
