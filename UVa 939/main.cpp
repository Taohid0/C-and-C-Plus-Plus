#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int a,b,value;
    while(cin>>a>>b)
    {

        map<string,int>mp;
        string s,v;

        for(int i=0;i<a;i++)
        {
            cin>>s>>value;
            mp[s]=value;
        }
        for(int i=0;i<b;i++)
        {int result=0;
            while(cin>>s)
            {
                if(s==".")break;
                else
                    result+=mp[s];
            }
            cout<<result<<endl;
        }

    }
    return 0;
}
