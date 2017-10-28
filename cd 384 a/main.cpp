#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    string s;
    cin>>n>>a>>b;
    getchar();
    cin>>s;
    if(s[a-1]==s[b-1])cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}
