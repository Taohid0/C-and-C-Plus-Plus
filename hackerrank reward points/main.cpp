#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,r=0;
    cin>>a>>b>>c;
    if(a>10)a=10;
    if(b>10)b=10;
    if(c>10)c=10;
    r=a+b+c;
    cout<<r*10<<endl;
    return 0;
}
