#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<long long>v;
    int n,num;int m  = -1;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    bool flag = false;
    if(v[0]>1)
    {
        flag=  true;
        m = v[0]-1;
    }

    for(int i = 1;i<n;i++)
    {
        if(v[i]-v[i-1]>1  )
        {
            flag = true;
            m = v[i]-1;

        }
    }

     if(v[n-1]-v[n-1-1]>1)cout<<v[n-2]+2<<endl;

     else
        cout<<v[n-1]+1<<endl;
    return 0;
}
