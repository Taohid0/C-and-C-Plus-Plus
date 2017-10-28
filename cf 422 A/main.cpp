#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b;
    cin>>a>>b;
    long mn = min(a,b);

    long long ans=1;
    for(int i = 1;i<=mn;i++)
        ans*=i;
    cout<<ans<<endl;
    return 0;
}
