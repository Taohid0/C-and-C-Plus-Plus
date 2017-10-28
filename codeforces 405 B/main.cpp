#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m,n;
    cin>>m>>n;
    long long counter = 1;
    while(true)
    {
     if(m>n)
     {
         cout<<counter;
         return 0;
     }
     m*=3;
     n*=2;
     counter++;
    }
    return 0;
}
