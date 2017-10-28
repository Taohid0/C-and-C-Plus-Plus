#include <bits/stdc++.h>

using namespace std;

int big_mod(int b,int p,int d)
{
    if(p==0){
        return 1;
    }
    if(p==2){
        return ((big_mod(b,p/2,d)*big_mod(b,p/2,d))%d);
    }
    return ((b%d)*big_mod(b,p-1,d))%d;
}

int main()
{
    int b,p,d;
    cin>>b>>p>>d;
    int result = big_mod(b,p,d);
    cout<<result;
    return 0;
}
