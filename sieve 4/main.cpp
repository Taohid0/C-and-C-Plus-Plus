#include <bits/stdc++.h>

void sieve (int n,int primes[]);

int main()
{
    int n = 500,v[n],i;

    sieve(n,v);

    for(i = 0;i<n;i++){
        if(v[i]==1){
            printf("%d ",i);
        }
    }

    return 0;
}

void sieve(int n,int primes[])
{
    int i,j;

    for(i = 1;i<n;i++)
    {
      primes[i] = 1;
    }

    primes[0] = 0;
    primes[1] = 0;

    for(i = 2;i<sqrt(n);i++){
        for(j = i*i;j<n;j+=i)
        {
            primes[j] = 0;
        }
    }


}
