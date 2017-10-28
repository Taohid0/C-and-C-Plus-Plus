    #include <algorithm>
    #include <iostream>
    #include <cstdlib>
    #include <cstring>
    #include <cstdio>
    #include <cmath>

    using namespace std;

    int path[101][101];

    int main()
    {
        int T,n,m,u,v,b,e;
        while (~scanf("%d",&T))
        for (int t = 1; t <= T; ++ t) {
            scanf("%d%d",&n,&m);
            for (int i = 0; i < n; ++ i) {
                for (int j = 0; j < n; ++ j)
                    path[i][j] = -101;
                path[i][i] = 0;
            }
            for (int i = 0; i < m; ++ i) {
                scanf("%d%d",&u,&v);
                path[u][v] = path[v][u] = 1;
            }
            //floyd
            for (int k = 0; k < n; ++ k)
            for (int i = 0; i < n; ++ i)
            for (int j = 0; j < n; ++ j)
                if (path[i][j] < path[i][k]+path[k][j])
                    path[i][j] = path[i][k]+path[k][j];

            scanf("%d%d",&b,&e);
            int max = 0;
          /*  for (int k = 0; k < n; ++ k)
                if (max < path[b][k]+path[k][e])
                    max = path[b][k]+path[k][e];
            printf("Case %d: %d\n",t,max);  */
            cout<<path[b][e];
        }
        return 0;
    }
