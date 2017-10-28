#include<bits/stdc++.h>
#define SZ 1000005
void sieve(void);
bool flag[SZ];
int main()
{
    sieve();
    int n,flg,i;
    while(scanf("%d",&n)&&n)
    {
        for(i=2; i<n; i++)
        {

            if(!flag[i] && !flag[n-i])
            {
            printf("%d:\n%d+%d\n",n,i,n-i);
            break;
            }
        }
        if(i==n)
        printf("%d:\nNO WAY!\n",n);
    }
    return 0;
}
void sieve(void)
{
    int i, j, add;
    flag[0] = flag[1] = 1;
    for(i = 4; i < SZ; i+=2)
        flag[i] = 1;
    for(i = 3; i < SZ; i+=2)
    {
        if(!flag[i])
        {
            if(SZ/i >= i)
            {
                add = i * 2;
                for(j = i * i; j < SZ; j += add)
                    flag[j] = 1;
            }
        }
    }
    return;
}
