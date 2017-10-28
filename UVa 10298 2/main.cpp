#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s && s!=".")
    {
        int max=1;
        int s_length=s.length();
        for(int i=1;i<s_length;i++)

            while(s[i]!=s[i%max])
                max++;

        if(s_length%max!=0)
            cout<<"1"<<endl;
        else
            cout<<s_length/max<<endl;
    }
    return 0;
}
