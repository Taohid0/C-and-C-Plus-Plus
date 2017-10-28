#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool test =true;
    int sg =(int)s.size();
    int indx;
    for(int i =0;i<sg;i++)
    {
        if(s[i]=='0' and test)
        {
            test =false;
            indx = i;
            break;
        }
    }
    for(int i = 0;i<sg;i++)
    {
        if(i!=indx)cout<<s[i];
    }
    return 0;
}
