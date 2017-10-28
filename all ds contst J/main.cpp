#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr[50005];
    map<string,int>mp;
    set<string>st;
    string s;
    int i=0;
    while(cin>>s)
    {
        arr[i]=s;
        mp[s]=1;
        i++;
    }
    sort(arr,arr+i);
    for(int j = 0;j<i-1;j++)
    {
        for(int k = j+1;k<i;k++)
        {
            if(mp[arr[j]+arr[k]]==1)
            {
                st.insert(arr[j]+arr[k]);
            }
            if(mp[arr[k]+arr[j]]==1)
            {
                st.insert(arr[k]+arr[j]);
            }
            mp.erase(arr[k]+arr[j]);
            mp.erase(arr[j]+arr[k]);
        }
    }
    for (auto l:st)
        cout<<l<<endl;
    return 0;
}
