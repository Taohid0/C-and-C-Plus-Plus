#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = (int)s.size();

    for(int i = 0;i<len;i++)
    {
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
