#include <bits/stdc++.h>

using namespace std;
int parent[101];
void makeSet()
{
    for(int i = 1;i<=100;i++)
    {
      parent[i] = i;
    }

}
int find(int r)
{
    if(parent[r] ==  r)
    {
        return r;
    }
    parent[r] = find(parent[r]);
    return
         find(parent[r]);
}

int main()
{


makeSet();
    while(1)
    {

        int u,v;
        cin>>u>>v;

        int u1 = find(u);
        int v1 = find(v);

        if(u1==v1)
        {
            cout<<"they are friend"<<endl;
        }
        else
            parent[u]=v;
    }
    return 0;
}
