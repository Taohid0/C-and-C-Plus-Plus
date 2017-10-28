#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s1,s2;
    ios::sync_with_stdio(false);
    while(cin>>n>>s1)
    {
        if(!n && s1=="0")break;
        s2 = s1;
        int len = (int)s1.size();
        for(int i = 0;i<len;i++)
        {
            if(s1[i]-'0'==n)
            {
                s2[i]='a';
            }

        }
        int first = 0;
        for(int i = 0;i<len;i++)
        {
            if(s2[i]-'0'!=0 && s2[i]!='a')break;
            first++;
        }
        if(first==len)cout<<0<<endl;
        else
        {
            for(int i = first;i<len;i++)
            {
                if(s2[i]!='a')cout<<s2[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
