#include<bits/stdc++.h>

#define MAX 1000020
using namespace std;
char is_prime[MAX];
int prime_series[200000], limit;
int diff[1000];
vector <int> result;
map <int, int> prim;
void sieve()
{
    register int k, i=2, j;
    memset(is_prime, 1 , MAX);

    for(j=i*i ; j<=MAX; j+=i)
        is_prime[j]=0;
    for(i=3; i*i<=MAX; )
    {
        for(j=i*i; j<=MAX; j+=(i*2))
            is_prime[j]=0;
        i++;
        while(is_prime[i]!=1)
            i++;
    }
    is_prime[0]=0;
    is_prime[1]=0;

    for(i=2, k=0; i<=MAX ; i++)
    {
        if(is_prime[i]==1)
        {
            prim[i]=k;
            prime_series[k++]=i;
        }
    }
    limit=k;
}
int main()
{
    sieve();
    int tmp,lower,res, upper, i, k, test_case, maxim, cnt;
    scanf("%d", &test_case);
    while(test_case--)
    {
        scanf("%d %d", &lower, &upper);
        if(lower>upper)
        {
            tmp=lower;
            lower=upper;
            upper=tmp;
        }
        while(is_prime[upper]!=1 && upper>=2 && upper>lower)
            upper--;
        while(is_prime[lower]!=1 && lower<upper)
        {
            lower++;
        }
        memset(diff, 0, sizeof(diff));
        int ul;
        ul= prim[upper];
        for(i= prim[lower] ; i< ul; i++)
        {
            diff[prime_series[i+1] - prime_series[i]]++;
        }
        for(k=0, cnt=0, maxim=0; k<120; k++)
        {
            if(diff[k]>maxim)
            {
                res=k;
                maxim=diff[k];
                cnt=1;
            }
            else if(maxim==diff[k])
                cnt++;
        }
        if(cnt==1)
        {
            printf("The jumping champion is %d\n", res);
        }
        else
        {
            printf("No jumping champion\n");
        }
    }
}
