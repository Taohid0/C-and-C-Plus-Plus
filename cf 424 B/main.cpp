#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,char>mp;
    string s1,s2;
    cin>>s1>>s2;
    int len = (int)s1.size();
    for(int i = 0;i<len;i++)
    {
        mp[(char)tolower(s1[i])] = (char)tolower(s2[i]);
    }
    cin>>s1;
    len = (int)s1.size();
    for(int i = 0;i<len;i++)
    {
        if(!isalpha(s1[i]))cout<<s1[i];
        else if(isupper(s1[i]))
        {
            cout<<(char)toupper(mp[(char)tolower(s1[i])]);
        }
        else
            cout<<mp[s1[i]];
    }
    cout<<endl;

    return 0;
}
