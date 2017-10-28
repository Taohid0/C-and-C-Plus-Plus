#include <bits/stdc++.h>

using namespace std;
list<int>cyc;
vector<pair<int,int> >graph[100];

void EularTour(list<int>::iterator i,int u)
{

    for(int j =0;j<(int)graph[u].size();j++)
    {
        pair<int,int>v = graph[u][j];
        if(v.second)
        {cout<<v.first<<" "<<v.second<<endl;
            v.second = 0;

            for(int k = 0;k<(int)graph[v.first].size();k++)
            {
                pair<int,int> uu = graph[v.first][k];
                if(uu.first ==u && uu.second==1)
                {
                    uu.second = 0;
                    break;
                }
            }
              EularTour(cyc.insert(i,u),v.first);

        }
    }
}

int main()
{
    cyc.clear();
    int node,edge,u,v;
    cin>>node>>edge;
    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(make_pair(v,1));
        graph[v].push_back(make_pair(u,1));
    }
    EularTour(cyc.begin(),1);
    for(auto i:cyc)
    {
        cout<<i << " ";
    }
    return 0;
}
