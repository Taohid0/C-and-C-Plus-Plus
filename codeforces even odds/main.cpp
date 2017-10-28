#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a;
    cin>>n>>a;
    long long mid = n/2;
    if(n%2)mid++;
    if(a<=mid)cout<<a*2-1<<endl;
    else
        cout<<(a-mid)*2<<endl;
    return 0;
}
