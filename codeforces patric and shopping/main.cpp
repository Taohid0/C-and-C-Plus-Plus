#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;
    long long  a1 = min(d1*2+d2*2,d1+d2+d3);
    long  long b1 = d1*2+d3*2;
    a1 = min(a1,b1);
    b1 = d3*2+d2*2;
    a1 =min(a1,b1);
    cout<<a1<<endl;
    return 0;
}
