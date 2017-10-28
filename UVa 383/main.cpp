#include <bits/stdc++.h>

using namespace std;
vector<int>graph[100];
int bfs(int source,int destination)
{
    queue<int>q;
    int level[100],vrtx,v;
    vector<int>visited;
    visited.assign(100,0);
    level[destination] = -1;
    level[source] = 0;

    q.push(source);
    while(!q.empty())
    {
        vrtx = q.front();
        q.pop();
        for(int i =0;i<(int)graph[vrtx].size();i++)
        {
            v = graph[vrtx][i];
            if(!visited[v])
            {
                level[v] = level[vrtx]+1;
                visited[v] =1;
                q.push(v);
            }
        }
    }
    return level[destination];
}


int main()
{
    ios::sync_with_stdio(false);
    vector<int>v;

    map<string,int>warehouse,warehouseClear;
    int m,n,p,t,request,result;
    string warehouseName,source,destination;

    cin>>t;

    cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;
    for(int i =1;i<=t;i++)
    {
        for(int g = 0;g<100;g++)
        {
            graph[g] = v;
        }
        cin>>m>>n>>p;
        for(int j = 1;j<=m;j++)
        {
            cin>>warehouseName;
            warehouse[warehouseName] = j;
        }
        for(int j = 1;j<=n;j++)
        {
            cin>>source>>destination;
            graph[warehouse[source]].push_back(warehouse[destination]);
            graph[warehouse[destination]].push_back(warehouse[source]);
        }
        cout<<"DATA SET  "<<i<<endl<<endl;
        for(int j = 1;j<=p;j++)
        {
            cin>>request>>source>>destination;
            result =bfs(warehouse[source],warehouse[destination]);

            if(result==-1)
            {
                cout<<"NO SHIPMENT POSSIBLE"<<endl;
            }
            else{
                cout<<"$"<<result*100*request<<endl;
            }
        }
        cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
