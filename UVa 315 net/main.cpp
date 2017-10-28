#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> edge[105];
int dfs_clock, dfn[105], low[105];
int ans;

void dfs(int cur, int parent)
{
    int child = 0;
    bool flag = false;

    low[cur] = dfn[cur] = ++dfs_clock;

    for (int i = 0; i < edge[cur].size(); ++i) {
        int nxt = edge[cur][i];
        if (!dfn[nxt]) {
            ++child;
            dfs(nxt, cur);
            low[cur] = min(low[cur], low[nxt]);

            if (low[nxt] >= dfn[cur])
                flag = true;
        }
        else if (nxt != parent)
            low[cur] = min(low[cur], dfn[nxt]);
    }
    if ((child >= 2 || parent != -1) && flag)
        ++ans;
}
int main()
{
    int N;
    string line;
    while (scanf("%d ", &N) && N) {
        // Intital
        dfs_clock = 0;
        ans = 0;
        for (int i = 0; i <= N; ++i) {
            edge[i].clear();
            dfn[i] = 0, low[i] = 0;
        }
        // Input
        int a, b;
        while (getline(cin, line)) {
            stringstream ss(line);
            ss >> a;
            if (!a) break;
            while (ss >> b) {
                edge[a].push_back(b);
                edge[b].push_back(a);
            }
        }

        dfs(1, -1);

        printf("%d\n", ans);
    }
}
