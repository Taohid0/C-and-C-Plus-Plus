#include <bits/stdc++.h>

using namespace std;

#define MAX 1000 //maximum node
 //parallel vector to store costs;
  int main()
 {
     vector<int>edges[MAX];
     vector<int>cost[MAX];

    int N,E,i;
  scanf("%d%d",&N,&E);
   for(i=1;i<=E;i++)
        { int x,y;
   scanf("%d%d",&x,&y);

    edges[x].push_back(y);
     edges[y].push_back(x);
      cost[x].push_back(1);
     cost[y].push_back(1);
       }
       printf("%d ",edges[1][1]);
       return 0;
        }

