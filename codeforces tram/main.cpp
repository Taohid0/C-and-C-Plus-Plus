#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total = 0,n,a,b,mx=-1;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        total-=a;
        total+=b;
        mx =max(mx,total);
    }
    cout<<mx<<endl;
    return 0;
}
