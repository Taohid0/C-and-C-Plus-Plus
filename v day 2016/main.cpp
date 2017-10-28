#include <bits/stdc++.h>

using namespace std;
unsigned long long  gcd(unsigned long long a, unsigned long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    unsigned long long n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        int t=gcd(a,b);
        if(t==1)cout<<"Nao"<<endl;
        else cout<<"Sim"<<endl;
    }
    return 0;
}
