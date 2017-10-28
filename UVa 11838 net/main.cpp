#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> edge[2005];
int dfn[2005], low[2005];
int dfs_clock;
vector<int> Stack;
int scc_cnt;

void Tarjan(int cur)
{
    dfn[cur] = low[cur] = ++dfs_clock;
    Stack.push_back(cur);
    for (int nxt : edge[cur]) {
        if (!dfn[nxt]) {
            Tarjan(nxt);
            low[cur] = min(low[cur], low[nxt]);
        }
        else if (find(Stack.begin(), Stack.end(), nxt) != Stack.end())  // if in Stack
            low[cur] = min(low[cur], dfn[nxt]);
    }
    if (dfn[cur] == low[cur]) {
        ++scc_cnt;
        int nxt;
        do {
            nxt = Stack.back();
            Stack.pop_back();
        } while (cur != nxt);
    }
}

int main()
{
    int N, M;
    while (scanf("%d %d", &N, &M) && (N || M)) {
        // Initial
        for (auto &v : edge) v.clear();
        fill(dfn, dfn+N+1, 0);
        fill(low, low+N+1, 0);
        dfs_clock = 0;
        Stack.clear();


        int V, W, P;
        for (int i = 0; i < M; ++i) {
            scanf("%d %d %d", &V, &W, &P);
            edge[V].push_back(W);
            if (P == 2) edge[W].push_back(V);
        }

        scc_cnt = 0;
        for (int i = 1; i <= N; ++i)
            if (!dfn[i] && scc_cnt <= 1) Tarjan(i);

        if (scc_cnt == 1) puts("1");
        else puts("0");
    }
}
