#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1000];
int parent[1000];
int visited[1000];
int rootNode,printNode;
bool flag =true;
int counter = 1;
int printed[1000];
void print_cycle(int u)
{
    flag =false;
    //cout<<u<<" "<<printNode<<" node"<<endl;
    cout<<endl;
    cout<<"Cycle "<<counter++<<" : "<<endl;
    printed[u]=1;
    while(true)
    {

        u = parent[u];
        printed[u]=1;
        cout<<u<<" ";
        if(u==printNode)
            break;
    }  cout<<endl;
}

void findDeadlock(int u)
{
    visited[u] = 1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        parent[v] = u;
        if(!visited[v]){

            findDeadlock(v);
            visited[v] = 0;
        }
        else if(!printed[v])
        {
            printNode = v;//cout<<"print "<<v<<endl;
            print_cycle(v);

        }
    }

}

int main()
{
    int edge,u,v;
    set<int>s;
    memset(visited,0,sizeof visited);
    cout<<"enter number of arcs"<<endl;
    cin>>edge;

    cout<<"enter the arcs "<<endl;

    while(edge--)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        s.insert(u);
        s.insert(v);
    }
    for (auto i:s)
    {
        if(!visited[i])
        {
            memset(visited,0,sizeof visited);
            //memset(parent,0, sizeof parent);
            rootNode=i;
            //cout<<"Call "<<i<<endl;
            findDeadlock(i);
        }
    }
    if(flag){
        cout<<"There is no cycle"<<endl;
    }
    return 0;
}
