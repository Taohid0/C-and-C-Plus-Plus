#include <bits/stdc++.h>

using namespace std;

int main()
{
    int graph[101][101];
    int node,u,v;
    while(cin>>node)
    {
        for(int i= 1;i<=node;i++)
        {
            for(int j = 1;j<=node;j++)
            {
                graph[i][j] = 999999;
            }
        }

        if(!node)break;
        while(1)
        {
            cin>>u;
            if(!u)break;
             while(1)
             {    cin>>v;
                 if(!v)break;
                 graph[u][v] =1;
             }

        }

        for(int i = 1;i<=node;i++)
        {
            for(int j = 1;j<=node;j++)
            {
                for(int k =1;k<=node;k++)
                {
                     graph[j][k] = min(graph[j][k],graph[j][i]+graph[i][k]);
                }
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            vector<int>v;
            cin>>u;
            for(int i = 1;i<=node;i++)
            {
                if(graph[u][i]>99999)
                {
                    v.push_back(i);
                }
            }
            int len = (int)v.size();
            cout<<len;
            sort(v.begin(),v.end());
            for(int i = 0;i<len;i++)
            {
                cout<<" "<<v[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
