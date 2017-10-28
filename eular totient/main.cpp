#include <bits/stdc++.h>

using namespace std;

bitset<10000>bs;
#define MAX 10000
vector<int>primes;

void sieve(int n)
{
    for(int i=2;i<=MAX;i++)
    {
        if(!bs[i])
        {
            for(int j = i*i;j<=MAX;j+=i)
            {
                bs[j] = 1;
            }
        }
    }
    for(int i=2;i<=MAX;i++)
    {
        if(!bs[i])
        {
            primes.push_back(i);
        }
    }
}


int eular_totient(int n)
{
    sieve(1000);
    int result=n;
    for(int i=0;primes[i]<=n;i++)
    {
        if(n%primes[i]==0)
        {
            result-=result/primes[i];
        }
    }
    return result;
}

int main()
{

     cout<<eular_totient(120);
}
