#include <bits/stdc++.h>

using namespace std;

string checkDisivible(string s,int b)
{
    long long  r = 0;
    int sg = (int)s.size();
    int i=0;
    if(s[0]=='-')i=1;
    for(;i<sg;i++)
    {
        r= r*10+(s[i]-'0');
        r%=b;
    }
    if(r)
    {
        return "not divisible";
    }
    else
        return "divisible";
}

int main()
{
    int n,b;
    string s;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>s>>b;
        string r =checkDisivible(s,b);
        cout<<"Case "<<i<<": "<<r<<endl;
    }
    return 0;
}
