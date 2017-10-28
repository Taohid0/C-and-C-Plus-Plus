#include <bits/stdc++.h>

using namespace std;
long long dp[1000006],cnt[1000000];
int main()
{

    int  n,value;
    long long ans;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        cnt[value]++;
    }

    dp[0]=0;
    dp[1]=cnt[1];
    long long r=0;
    for(int i = 2;i<=100000;i++)
    {
        r =max(r,max(dp[i-1],dp[i-2]+cnt[i]*i));
        dp[i]=r;
    }
    cout<<r<<endl;
    return 0;
}
