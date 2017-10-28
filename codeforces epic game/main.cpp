#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,n;
   cin>>a>>b>>n;
   int gcd = __gcd(a,b);
   int r = 00;
   while(n>0)
   {
       n-=gcd;
       r = 1-r;
   }
   cout<<r<<endl;


    return 0;
}
