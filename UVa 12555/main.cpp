#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,a,b;
    string s;

    cin>>test;

    for(int i = 1;i<=test;i++)
    {
        cin>>a;
        getline(cin,s);
        if((int)s.length()>3)
        {
            b =(int) s[3]-'0';
        }
        else b = 0;

        cout<<"Case "<<i<<": "<<a*.5+b*.05<<endl;
    }
    return 0;
}
