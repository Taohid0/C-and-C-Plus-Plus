#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r=0;
    string s;
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>s;
        if(s[0]=='+'|| s[1]=='+')r++;
        else r--;
    }
    cout<<r<<endl;
    return 0;
}
