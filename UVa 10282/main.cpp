#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string>mp;
    string s1,s2,str;
    while(getline(cin,str))
    {
        if(str[0]=='\0')break;
        stringstream ss(str);
        ss>>s1;
        ss>>s2;


        mp[s2]=s1;

    }
    while(cin>>s1)
    {
        if((int)mp[s1].size()>0)
        cout<<mp[s1]<<endl;
        else cout<<"eh"<<endl;
    }
    return 0;
}
