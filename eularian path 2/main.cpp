#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int> >graph[100];
list<int>cyc;
vector<int>vec;
void eularTour(int u)
{
    for(int j = 0;j<(int)graph[u].size();j++)
    {
        pair <int,int> v =graph[u][j];

        if(v.second)
        {  // cout<<v.first<< " "<<v.second<<endl;
            v.second = 0;
            for(int k = 0;k<(int)graph[v.first].size();k++)
            {
                pair<int,int>uu = graph[v.first][k];
               cout<<uu.first<< " "<<u<<endl;
                if(uu.first==u && uu.second)
                {
                    uu.second = 0;
                    break;
                }
            }
            vec.push_back(u);
            eularTour(v.first);
        }
    }
}

int main()
{
   int node,edge,u,v;
   cin>>node>>edge;
   while(edge--)
   {
       cin>>u>>v;
       graph[u].push_back(make_pair(v,1));
   }
   for(int i = 1;i<=6;i++)
   {
       for(int j = 0;j<(int)graph[i].size();j++)
       {
           cout<<i<< " "<<graph[i][j].first<< " "<<graph[i][j].second<<endl;
       }
   }
   eularTour(5);
   for(auto i:vec)cout<<i<< " ";
    return 0;
}
