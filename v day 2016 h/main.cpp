#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b,c,a;
    cin>>a>>b>>c;
    //cout<<a<<b<<c<<endl;
    long long temp=ceil(a*70/100.0f);

    //cout<<temp<<endl;
    long long to_do=temp-c;

    long long remainingClass=a-b;

    if(remainingClass<to_do)cout<<-1<<endl;
    else cout<<to_do<<endl;


    //cout<<c<<" "<<a<<" "<<b<<endl;
    long long t=(c+(a-b))*100;
    cout<<(int)(t/a)<<endl;
    return 0;
}
