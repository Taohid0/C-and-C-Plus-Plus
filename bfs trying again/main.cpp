#include <bits/stdc++.h>

using namespace std;
 vector<int>G[1000];

void bfs(int node,int src)
{
    int level[100] = {0},visited[100] = {0},parent[100];
    queue<int>q;
    q.push(src);
    visited[src] = 1;
    level[src] = 0;

    while(!q.empty()){
        int u = q.front();

        for(int i = 0;i<(int)G[u].size();i++)
        {
            int v = G[u][i];


            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                parent[v] =u;
                q.push(v);
            }
        }
        q.pop();
    }

    for(int i = 1;i<=node;i++){

       printf("%d to %d distance %d\n",src,i,level[i]);
    }


}

int main()
{

    int test,a,b,src,node,edge;

    cin>>test;
    while(test--){
        cout<<"enter the number of edges and nodes"<<endl;
        cin>>edge>>node;

        cout<<"enter the points in pair"<<endl;
    for(int i = 0;i<edge;i++){
           cin>>a>>b;
           G[a].push_back(b);
           G[b].push_back(a);
    }

    cout<<"enter source node"<<endl;
    cin>>src;
     bfs(node,src);
    }

    return 0;
}
