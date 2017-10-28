#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,r = 0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b-a>=2)r++;
    }
    cout<<r<<endl;
    return 0;
}
