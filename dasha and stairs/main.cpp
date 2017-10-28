#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 and b==0)
    {
        cout<<"NO"<<endl;
        return 0;

    }
    if(abs(a-b)==0 or abs(a-b)==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
