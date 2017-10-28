#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    n=n%4;
    cout<<n<<endl;
    int r=1;
    for(int i=1;i<=n;i++)
        r=(r*1378)%10;

    cout<<r<<endl;
    return 0;
}
