#include <bits/stdc++.h>

using namespace std;
#define MAX 100000
vector<int>edges[MAX];
vector<int>cost[MAX];
int main() {
     int N,E,i;
      scanf("%d%d",&N,&E);
      for(i=1;i<=E;i++) {
            int x,y;
      scanf("%d%d",&x,&y);
      edges[x].push_back(y);
       edges[y].push_back(x);
       cost[x].push_back(1);
       cost[y].push_back(1);
        }
         return 0;
}
