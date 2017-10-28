#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long r=b/a;
    if(a==b)
    {
        cout<<1<<endl;
        return 0;
    }
    if(r*a<=b)cout<<r+1<<endl;
    else cout<<r<<endl;
    return 0;
}
