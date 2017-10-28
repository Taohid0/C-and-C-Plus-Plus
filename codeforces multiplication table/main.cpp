#include <bits/stdc++.h>

using namespace std;

int main()
{
    long a,b;
    cin>>a>>b;
    int r = 0;
    for(int i=1;i<=a;i++)
    {
        if(b%i==0 and b/i<=a)
            r++;
    }
    cout<<r<<endl;
    return 0;
}
