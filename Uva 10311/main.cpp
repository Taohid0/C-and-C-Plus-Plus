#include <bits/stdc++.h>

using namespace std;

bitset<50000000>bs;
vector<int>v;
void sieve()
{
    for(int i= 2;i<=8000;i++)
    {
        for(int j = i*i;j<=50000000;j+=i)
        {
            if(!bs[j])bs[j]=  1;
        }
    }
    v.push_back(1);
    for(int i = 2;i<=500010;i++)
    {
       if(!v[i])v.push_back(i);
    }

}


int main()
{
    sieve();
    ios::sync_with_stdio(false);

    long long n;

    while(cin>>n)
    {
        if(n%2)cout<<n<<" is not the sum of two primes!"<<endl;


    }
    return 0;
}
