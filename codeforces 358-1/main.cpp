#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,r = 0;

     cin>>a>>b;

    for(int i =1;i<=a;i++)
    {
        int t = i%5;
        r+=(int)(t+b)/5;
    }
    cout<<r<<endl;

    return 0;
}
