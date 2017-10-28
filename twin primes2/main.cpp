#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define st(s) s.size();
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[20000010];
int tprime[20000010];
void sieve()
{
    prime[1]=false;
        int n=sqrt(20000010);
        for(int i=3;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=20000010;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
void twin_prime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}
int main()
{
    cover(prime,true);
    sieve();
    twin_prime();
    int n;
    while(sc("%d",&n)==1)
    {
        pf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
    return 0;
}
