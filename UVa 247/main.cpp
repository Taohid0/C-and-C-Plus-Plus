#include <bits/stdc++.h>

using namespace std;

int main()
{
    int node,edge,c =1;
    while(cin>>node>>edge)
    {
        int visited[26] ={0};

        if(!node && !edge)break;
        int graph[26][26] ={0};
        string u,v;
        map<string,int>mp;

        string toName[26];
        int indx =0;
        while(edge--)
        {
            cin>>u>>v;

            if(mp[u]==0)mp[u] =indx++;
            if(mp[v]==0)mp[v] = indx++;
            toName[mp[u]] = u;
            toName[mp[v]] = v;
            graph[mp[u]][mp[v]] = 1;

        }
        for(int i=0;i<node;i++)
        {
            for(int j =0;j<node;j++)
            {
                for(int k = 0;k<node;k++)
                {
                    graph[j][k]|=(graph[j][i]&&graph[i][k]);
                    //graph[k][j]|=(graph[j][i]&& graph[i][k]);
                }
            }
        }
        vector<string>vec;
        cout<<"Calling circles for data set "<<c<<":"<<endl;
        for(int i =0;i<node;i++)
                    {
                              if(!visited[i]){
                                    visited[i] = 1;
                                    vec.push_back(toName[i]);
                          for(int j = 0;j<node;j++)
                          {
                              if(graph[i][j] && graph[j][i] && !visited[j])
                              {
                                  vec.push_back(toName[j]);
                                  visited[j] = 1;
                              }
                          }
                          int len = (int)vec.size();
                          if(len==1)
                          {
                              cout<<toName[i]<<endl;
                          }
                          else
                          {
                              for(int I =0;I<len;I++)
                              {
                                  cout<<vec[I];
                                  if(node<=I-2)cout<<", ";
                              }
                              cout<<endl;
                          }

                     }
                     cout<<endl;
                     vec.clear();

                    }

            mp.clear();
        }

    return 0;
}
