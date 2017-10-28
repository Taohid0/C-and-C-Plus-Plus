#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long n;
    vector<long long>v;
    long long value,result=0;
    cin>>n;
    long long mx=-1000007;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);
        if(mx<value)
        {
            mx=value;
        }
    }
    for(int i=0;i<n;i++)
    {
        result+=mx-v[i];
    }
    cout<<result<<endl;
    return 0;
}
