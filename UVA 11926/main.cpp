#include <bits/stdc++.h>

using namespace std;
 //net code,easy
int n, m, s, e, r;
bool conflict;
bool timeee[1000100];

bool check() {
    for(int i = s; i < e; i++) {
        if(timeee[i]) return false;
        timeee[i] = true;
    }
    return true;
}

int main() {
    for(;;) {
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;
        conflict = false;

        memset(timeee, false, sizeof timeee);
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &s, &e);
            if(!conflict && !check()) conflict = true;
        }
        for(int i = 0; i < m; i++) {
            scanf("%d %d %d", &s, &e, &r);
            while(!conflict && s < 1000000) {
                if(!check()) conflict = true;
                s += r;
                e = min(e + r, 1000000);
            }
        }
        if(!conflict) printf("NO CONFLICT\n");
        else printf("CONFLICT\n");
    }
}
