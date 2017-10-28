#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1= (int)s1.size();
    int len2 = (int)s2.size();
    if(len1!=len2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag =true;
    for(int i = 0;i<len1;i++)
    {
        if(s1[i]!=s2[len1-i-1])
        {
            flag =false;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
