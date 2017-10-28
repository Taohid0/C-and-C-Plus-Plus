#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    string from,to,s;

    cin>>test;
    getchar();

    while(test--)
    {
        map<char,char>mp;

        cin>>from>>to;
        int len =(int)from.size();
        for(int j=0;j<len;j++)
        {
            mp[from[j]]=to[j];
        }
        cout<<to<<endl;
        cout<<from<<endl;
        getchar();
        while(getline(cin,s))
        {
            if(s.empty())break;
            len=(int)s.size();
            for(int j=0;j<len;j++)
            {
               if(mp[s[j]])cout<<mp[s[j]];
               else
                cout<<s[j];
            }
            cout<<endl;
        }
        if(test)cout<<endl;
    }
    return 0;
}
