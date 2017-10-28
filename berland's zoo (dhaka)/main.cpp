#include <bits/stdc++.h>

int main()
{
    int n, x[100], d[100],i,j;
    bool sptd = false;
    scanf("%d", &n);
    for ( i = 0; i < n; ++i)
    {
        scanf("%d%d", &x[i], &d[i]);
        for (j = 0; j < i; ++j)
        {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i])
            {
                sptd = true;
                break;
            }
        }
        if (sptd)
        {
            break;
        }
    }
   if(i==n){
    printf("NO\n");
   }
   else
    printf("YES\n");
    return 0;
}
