#include <bits/stdc++.h>

using namespace std;
vector<int>graph[1000];

int path[1000];

void bfs(int src,int des)
{
    int level[1000];
    int visited[1000] = {0};
    visited[src] = 1;
    level[src] = 0;
    queue<int>q;
    q.push(src);
    int u,v;

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(int i = 0;i<(int)graph[u].size();i++)
        {
            v = graph[u][i];
            if(!visited[v])
            {
                level[v] = level[u]+1;
                visited[v] = 1;
                path[v]= u;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n,src,des;
    vector<int>v;

    while(cin>>n)
    {
        getchar();
        for(int i = 1;i<=n;i++)
        {
            char inp [1000]; gets (inp);
            char *pch;
            pch = strtok (inp, "-,");
            int id = atoi (pch);
            pch = strtok (NULL, "-,");


            while ( pch != NULL ) {
                int sees = atoi (pch);
                graph[id].push_back(sees);
                pch = strtok (NULL, "-,");

            }



        }

        cout<<"-----"<<endl;
        for(int i = 1;i<=n;i++)
        {
            cin>>src>>des; bfs(src,des);
            v.clear();
            while(path[des]!=src)
            {
                v.push_back(path[des]);
                des = path[des];


            }
            v.push_back(des);
            cout<<path[des]<<" ";
            for(int i = (int)v.size()-1;i>=0;i--)
            {
                cout<<v[i]<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}
