#include <bits/stdc++.h>

using namespace std;
int const inf =  9999999;
vector<int>adjList[100005];
vector<int>color;
bool bfs(int source)
{
    queue<int>q;


    bool isBipartite = true;
    q.push(source);
    color[source] = 0;

    while(!q.empty() && isBipartite)
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<(int)adjList[u].size();i++)
        {
            int v = adjList[u][i];

            if(color[v] ==inf)
            {
                color[v] = 1-color[u];
                q.push(v);
            }
            else if(color[u]==color[v])
            {
                isBipartite = false;
                break;
            }
        }

    }
 return isBipartite;

}

int main()
{  int arr[100005] ={0};

    int edge,node,u,v;
    color.assign(100005,inf);
    vector<int>v1,v2;
        cin>>node;

        cin>>edge;

        while(edge--)
        {
         cin>>u>>v;
        adjList[u].push_back(v);
         adjList[v].push_back(u);
         arr[u]++;
         arr[v]++;
        }
          bool result;
        for(int i = 1;i<=node;i++)
        {
            if (color[i]==inf)result=bfs(i);
            if(!result)break;
        }

        if(!result)
        {
            cout<<-1<<endl;
        }
        else
            {
                for(int i = 1;i<=node;i++)
                {   //cout<<color[i]<< " ";
                    if(color[i]==1 )v1.push_back(i);
                    else  v2.push_back(i);
                }

            int len1 = (int)v1.size();
            int len2 =(int)v2.size();
           // sort(v1.begin(),v1.end());
           // sort(v2.begin(),v2.end());
//           if(v1.empty())
//           {
//               for(int i = 1;i<=node;i++)
//                if(find(v2.begin(),v2.end(),i)==v2.end())
//                v1.push_back(i);
//           }
//           if(v2.empty())
//           {
//               for(int i = 1;i<=node;i++)
//                if(find(v1.begin(),v1.end(),i)==v1.end())
//                v2.push_back(i);
//           }

                cout<<len1<<endl;
                for(int i= 0;i<len1;i++)
                {
                  cout<<v1[i]<< " ";
                }
                cout<<endl;
                 cout<<len2<<endl;
                for(int i = 0;i<len2;i++)
                {
                    cout<<v2[i]<<" ";
                }
                cout<<endl;
            }



    return 0;
}
