#include <cstdio>
int main()
{
    int t, n, m;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        int Ans = 0;
        while(n > 0){
            n = n-m;
            Ans++;
            if(n <= 0)  break;
            n++;
        }
        if(n == 0)  printf("%d\n", Ans);
        else    printf("cannot do this\n");
    }
    return 0;
}
