#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r = 0;
    int temp;
    temp = n;
    r+=n/5;
    n%=5;
    r+=n/4;
    n%=4;
    r+=n/3;
    n%=3;
    r+=n/2;
    n%=2;
    r+=n;
    cout<<r<<endl;

    return 0;
}
