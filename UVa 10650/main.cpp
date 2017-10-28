#include <bits/stdc++.h>

using namespace std;
int prime[35001], visit[35001];

int main()
{
    memset(visit, 0, sizeof(visit));
    int count = 0;
    for (int i = 2; i < 35001; ++ i)
        if (!visit[i]) {
            prime[count ++] = i;
            for (int j = i+i; j < 35001; j += i)
                visit[j] = 1;
        }

    int x, y;
    while (~scanf("%d%d",&x,&y) && x+y) {
        if (x > y) {
            x = x^y;
            y = x^y;
            x = x^y;
        }
        int l = 0, r = 0;
        for (int i = 0; i < count; ++ i) {
            if (prime[i] <= y) r = i;
            if (prime[i] < x) l = i+1;
        }
        while (l && l < r && prime[l-1]+prime[l+1] == prime[l]*2)
            ++ l;
        while (l < r && prime[r-1]+prime[r+1] == prime[r]*2)
            -- r;
        int first = 1;
        for (int i = l+2; i <= r; ++ i)
            if (prime[i]-prime[i-1] == prime[i-1]-prime[i-2]) {
                if (first == 1) {
                    first = 2;
                    printf("%d %d %d",prime[i-2],prime[i-1],prime[i]);
                }else printf(" %d",prime[i]);
            }else if (first == 2) {
                first = 1;
                printf("\n");
            }
        if (first == 2) printf("\n");
    }

    return 0;
}
