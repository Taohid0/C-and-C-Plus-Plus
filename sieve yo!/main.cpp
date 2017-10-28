#include <bits/stdc++.h>

using namespace std;

bitset<1000001>bs;
int MAX =1000000;

void sieve()
{
    bs.set();
    for(int i=2;i*i<=MAX;i++)
    {
        if(bs[i])
        {
            for(int j = i*i;j<=MAX;j+=i)
            {
                bs[j]=0;
            }
        }
    }
}



int main()
{
    sieve();
    for(int i=2;i<=1000000;i++)

    {
        if(bs[i])
            cout<<i<< " ";
    }
    return 0;
}
