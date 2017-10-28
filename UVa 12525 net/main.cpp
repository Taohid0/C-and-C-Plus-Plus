#include<cstdio>

using namespace std;

int N, x, y, a, b, c, d, q, src, des;
long long dist[100][100], time[100][100];

int main() {
    scanf("%d", &N);
    while(N--) {
        scanf("%d %d", &x, &y);

        for(int i = 0; i < x; i++)
            for(int j = 0; j < x; j++)
                if(i == j) dist[i][j] = 0;
                else dist[i][j] = 1LL<<60, time[i][j] = 1LL<<60;

        for(int i = 0; i < y; i++) {
            scanf("%d %d %d %d", &a, &b, &c, &d);
            if(c < time[a - 1][b - 1] || (c == time[a - 1][b - 1] && d < dist[a - 1][b - 1])) {
                time[a - 1][b - 1] = time[b - 1][a - 1] = c;
                dist[a - 1][b - 1] = dist[b - 1][a - 1] = d;
            }
        }

        for(int k = 0; k < x; k++)
            for(int i = 0; i < x; i++)
                for(int j = 0; j < x; j++)
                    if(time[i][j] > time[i][k] + time[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        time[i][j] = time[i][k] + time[k][j];
                    }
                    else if(time[i][j] == time[i][k] + time[k][j] && dist[i][j] > dist[i][k] + dist[k][j])
                        dist[i][j] = dist[i][k] + dist[k][j];

        scanf("%d", &q);
        for(int i = 0; i < q; i++) {
            scanf("%d %d", &src, &des);
            if(dist[src - 1][des - 1] != 1LL<<60)
                printf("Distance and time to reach destination is %lld & %lld.\n", dist[src - 1][des - 1], time[src - 1][des - 1]);
            else printf("No Path.\n");
        }
        if(N) printf("\n");
    }
}
