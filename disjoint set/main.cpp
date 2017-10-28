#include <bits/stdc++.h>

using namespace std;

int parent[100];

void makeSet()
{
    for(int i = 1;i<100;i++)
    {
        parent[i]=i;
    }
}

int findParent(int a)
 {

    if(parent[a]==a)
         return a;
    parent[a] = findParent(parent[a]);

        return parent[a];
}

int main()
{int a,b,u,v;

  makeSet();
    while (1)
    {
        cin>>a>>b;
      u = findParent(a);
      v = findParent(b);
        if(u==v)
        {
            cout<<a << " and "<<b<<" are already friend "<<endl;
        }
        else
            parent[u] = v;
    }
    return 0;
}
