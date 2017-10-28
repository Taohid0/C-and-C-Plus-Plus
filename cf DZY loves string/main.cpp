#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,arr[100],ans=0,len;
    string s;
    cin>>s>>k;
    int mx=-1;

    for(int i = 0;i<26;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx = arr[i];
        }
    }
    len = (int)s.size();

    for(int i = 0;i<len;i++)
    {
        ans+=arr[s[i]-'a']*(i+1);
        //cout<<ans<<endl;
    }
    for(int i=len+1;i<=k+len;i++)
    {
        ans+=i*mx;
    }
    cout<<ans<<endl;
    return 0;
}
