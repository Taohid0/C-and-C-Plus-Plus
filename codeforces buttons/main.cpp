#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,r;
   r = 0;
   cin>>n;
   for(int i = n;i>=1;i--)
   {
       r+=i;
   }
   r+=n-2;
   cout<<r<<endl;
    return 0;
}
