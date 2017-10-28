#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1000];
int path[1000];

void bfs(int src,int des)
{
    int level[1000];
    int visited[1000] ={0};
    int u,v;
    level[src] =0;
    visited[src] =1;

    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                q.push(v);
                path[v] = u;
            }
        }
    }
}

int main()
{
  int t,edge,query,s,d;
  string src,des;

  cin>>t;
  while(t--)
  { for(int g = 0;g<200;g++)graph[g].clear();
      cin>>edge>>query;
      while(edge--){

      cin>>src>>des;
      graph[src[0]-'A'].push_back(des[0]-'A');
      graph[des[0]-'A'].push_back(src[0]-'A');
  }
     while(query--)
     {

         cin>>src>>des;
         s = src[0]-'A';
         d=  des[0]-'A';

         bfs(s,d);
         vector<int>p;

         p.push_back(d);
         while(1)
         {
             p.push_back(path[d]);
             d = path[d];
             if(s==d)break;

         }
         for(int j = (int)p.size()-1;j>=0;j--)
         {
             cout<<(char)(p[j]+'A');
         }
         cout<<endl;


     }
    if(t)
     cout<<endl;
  }


    return 0;
}
