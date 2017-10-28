#include <bits/stdc++.h>

using namespace std;

unsigned long long cal(unsigned long long n,unsigned long long k)
{
    if(n-1==k)return n;

    else if(k>n/2)
    {
        k=k-n/2;
    }
    return cal(n-1,k);
}


int main()
{
    unsigned long long n,k,n2,k;
     cin>>n>>k;

     unsigned long long ans=cal(n,k);
     cout<<ans<<endl;

    return 0;
}
