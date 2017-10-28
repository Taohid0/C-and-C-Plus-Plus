#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,n;
    cin>>a>>b>>n;
    long long t1 = ceil((double)a/n);
    long long t2 = ceil((double)b/n);
    cout<<t1*t2<<endl;

    return 0;
}
