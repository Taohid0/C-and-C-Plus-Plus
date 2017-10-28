#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    int len;
    cin>>n;
    while(n--)
    {
        cin>>s;
        len = s.size();
        if(len<=10)cout<<s<<endl;
        else
            cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
            return 0;
}
