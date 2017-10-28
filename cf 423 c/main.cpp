#include<bits/stdc++.h>
using namespace std;
vector<string >v[1000009];
bool cmp(string a,string b)
{
    return a.size()>b.size();
}
int main()
{
    int n,i,j,k,l,m;
    string x,y,ans;
    for(i=0;i<100000;i++)
        y+="#";
    cin>>n;
    int mx=0;
    int ttl=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>k;
        ttl+=k;
        for(j=0;j<k;j++)
        {
            cin>>l;
            v[l].push_back(x);
            mx = max(mx,l);

        }
    }
    for(i=1;i<=mx;i++)
    {
        sort(v[i].begin(),v[i].end(),cmp);
    }
//    for(i=0;i<=mx;i++)
//    {
//        for(j=0;j<v[i].size();j++)
//        {
//
//        }
//    }
    ans="";

    for(i=1;i<=mx;i++)
    {

        if(v[i].size()==0){

            continue;
        }
        for(j=ans.size();j<(i-1);j++)
            ans+="a";
        if(ans.size()==(i-1))
        {
            ans+=v[i][0];

        }
        if(ans.size()>=i)
        {
            while(ans.size()>=i)
                ans.pop_back();
            ans+=v[i][0];
        }

    }
    cout<<ans<<endl;
}
