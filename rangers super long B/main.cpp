#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,points;
    map<string,int>mp;
    string winner,name,n1="",n2="";
    int max = -100000;
    cin>>n;
    while(n--)
    {
        cin>>name>>points;

        mp[name]+=points;
        if(mp[name]>max)
        {
            max = mp[name];
            winner=  name;
        }
    }

    vector<pair<int,string> >v;
    for(auto i:mp)
    {

        v.push_back(make_pair(i.second,i.first));
    }
    sort(v.rbegin(),v.rend());

    if(v.size()>1)
    {
        if(v[0].first>v[1].first)cout<<v[0].second;
        else
        cout<<winner<<endl;
    }
    else
        cout<<winner<<endl;
    return 0;
}
