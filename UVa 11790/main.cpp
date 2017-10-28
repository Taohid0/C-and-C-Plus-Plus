#include <bits/stdc++.h>

using namespace std;

int T, N;
int A[3000], B[3000], Li[3000], Ld[3000], max_i, max_d, temp_i, temp_d;

int main() {
    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {
        scanf("%d", &N);
        for(int i = 0; i < N; i++)
            scanf("%d", &A[i]);
        for(int i = 0; i < N; i++)
            scanf("%d", &B[i]);

        max_i = max_d = 0;
        for(int i = 0; i < N; i++) {
            temp_i = temp_d = Li[i] = Ld[i] = B[i];

            for(int j = 0; j < i; j++) {
                if(A[j] < A[i])
                    Li[i] = max(Li[i], temp_i + Li[j]);
                if(A[j] > A[i])
                    Ld[i] = max(Ld[i], temp_d + Ld[j]);
            }
            max_i = max(max_i, Li[i]);
            max_d = max(max_d, Ld[i]);
        }
        if(max_i >= max_d)
            printf("Case %d. Increasing (%d). Decreasing (%d).\n", \
                t, max_i, max_d);
        else
            printf("Case %d. Decreasing (%d). Increasing (%d).\n", \
                t, max_d, max_i);
    }
}
