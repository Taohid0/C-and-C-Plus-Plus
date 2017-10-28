#include <bits/stdc++.h>

using namespace std;

#define white 0
#define gray  1
#define black 2



int t=0 ;

struct node
{
    int color,parent,value,st,et;

    bool operator < (const node & p)const
    {
        return et<p.et;
    }
};

vector<node>g[100];

void dfs(node u)
{
   t++;
   u.st = t;
   u.color = gray;
   node v;

   for(int i= 0;i<(int)g[u.value].size();i++)
   {
      v = g[u.value][i];

      if(v.color==white)
      {
          v.parent=u.value;
      }
      dfs(v);
      u.color = black;
      t++;
      u.et = t;

   }

}



int main()
{
    int n,e,src,des;

    node u,v;
    cout<<"enter the number of nodes and their edges ";
    cin>>n>>e;

    cout<<"enter the edges ";

    for(int i = 0;i<e;i++)
    {
         cin>>u.value>>v.value;
         u.color = white;
         v.color = white;
         u.parent = 0;
         v.parent = 0;

         g[u.value].push_back(v);
         g[v.value].push_back(u);
    }
    sort(g.begin(),g.end());

    for(int i = 0;i<4;i++)
    {
        cout<<v[i].et<<" ";
    }
    return 0;
}
