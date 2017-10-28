#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

long long inf = 1LL<<60;

int N;
long long graph[110][110];
string in;

int main() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        for(int j = 0; j <= i; j++)
            if(i == j) graph[i][j] = 0;
            else {
                cin >> in;
                if(in == "x")
                    graph[i][j] = 1LL<<60;
                else
                    graph[i][j] = atoi(in.c_str());
                graph[j][i] = graph[i][j];
            }
    for(int k = 0; k < N; k++)
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                graph[i][j] = min(graph[i][j], graph[k][j] + graph[i][k]);

    long long ans = 0;
    for(int i = 0; i < N; i++)
        ans = max(ans, graph[0][i]);

    printf("%lld\n", ans);
}
