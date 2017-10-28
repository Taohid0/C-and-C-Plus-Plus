#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    string s1,s2;
    cin>>m>>n;
    map<string,string>mp;
    while(n--)
    {
        cin>>s1>>s2;
        if(s1.size()<=s2.size())
            mp[s1]= s1;
        else
            mp[s1] = s2;
    }
    while(m--)
    {
        cin>>s1;
        cout<<mp[s1]<<" ";
    }
    return 0;
}
