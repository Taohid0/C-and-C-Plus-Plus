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

int main()
{
   bool primes [1000005];
    int length = (int) sqrt (1000005);

    //for ( int i = 0; i < 1000005; i++ )
     //   primes [i] = true;

    for ( int i = 2; i <= length; i++ ) {
        for ( int j = i * i; j < 1000005; j += i )
            primes [j] = false;
    }
    int n;
    cover(primes,true);
    while(scanf("%d",&n) && n){
             bool flag = true;
        int i = 3,b=1;

        while(i<=n-i && flag){
            if(primes[i] && primes[n-i]){
                printf("%d = %d + %d\n",n,i,n-i);
                flag = false;
                 b = 0;
            }
            i+=2;
        }
        if(b==1){
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
