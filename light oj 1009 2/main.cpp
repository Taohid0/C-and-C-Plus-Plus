#include <bits/stdc++.h>

using namespace std;

vector<int>edge[100001];
vector<int>color;
int white,black;

void bicolor(long long s)
{
    queue<int>q;

    q.push(s);
    color[s] =0;
    white++;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i<(int)edge[u].size();i++)
        {
            int v = edge[u][i];
            if(color[v]==-1)
            {
                color[v] = 1-color[u];
                if(color[v]==0)white++;
                else black++;
                q.push(v);
            }
        }
    }

}

int main()
{
   int test,n,u,v;

   scanf("%d",&test);
   for(int i = 1;i<=test;i++)
   {
       white = 0,black= 0;
       set<int>vertices;
       for(int I = 0;I<100001;I++)
       {
           edge[I].clear();
       }
       color.assign(100001,-1);

       scanf("%d",&n);
       while(n--)
       {
           scanf("%d%d",&u,&v);
           vertices.insert(u);
           vertices.insert(v);
           edge[u].push_back(v);
           edge[v].push_back(u);
       }
        for(set<int>::iterator it =vertices.begin();it!=vertices.end();it++)
        {
            if(color[*it]==-1)
            {
                bicolor(*it);
            }
        }

        printf("Case %d: %d\n",i,max(white,black));
   }


    return 0;
}
