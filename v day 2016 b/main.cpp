#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s+="0";
    int len = (int)s.size();
    vector<pair<char,int> >vp;
    int counter=0;
    for(int i=0;i<len-1;i++)
    {
        if(s[i]==s[i+1])
        {
            counter++;
        }
        else
        {
            vp.push_back(make_pair(s[i],counter+1));
            counter=0;
        }
    }
    for(int i=0;i<(int)vp.size();i++)
    {
        cout<<vp[i].first<<vp[i].second;
    }
    cout<<endl;
    return 0;
}
