#include <bits/stdc++.h>

using namespace std;

int main()
{  ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<int,int> >graph[2001];
    int test,node,edge,u,v,c;
    cin>>test;

    while(test--){
        for(int i = 0;i<2001;i++)
    {
        graph[i].clear();
    }
       vector<int>d;
        d.assign(20001,999999);
        bool negCycle = false;
        cin>>node>>edge;
        for(int i = 1;i<=edge;i++)
        {
            cin>>u>>v>>c;
            graph[u].push_back(make_pair(v,c));
        }
        d[0]= 0;
        for(int i = 0;i<node-1;i++)
        {
            for(int j = 0;j<node;j++)
            {
                for(int k = 0;k<(int)graph[j].size();k++)
                {
                    pair<int,int>temp =graph[j][k];
                    d[temp.first] = min(d[temp.first],d[j]+temp.second);
                }
            }
        }
        for(int j = 0;j<node;j++)
            {
                for(int k = 0;k<(int)graph[j].size();k++)
                {
                    pair<int,int>temp =graph[j][k];
                    if(d[temp.first]>d[j]+temp.second)
                    {
                        negCycle =true;
                        break;
                    }
                }
            }
            if(negCycle)cout<<"possible";
            else cout<<"not possible";
           cout<<endl;

    }
    return 0;
}
