#include <bits/stdc++.h>

using namespace std;

int n,a,b,c,dp[4005];

int calculate(int len)
{
    if (len<0)return -0100000;
    if(len==0)return 0;
    if(dp[len]!=-1)return dp[len];
    int mx=-100000;
    mx= max(mx,calculate(len-a)+1);
    mx=max(mx,calculate(len-b)+1);
    mx =max(mx,calculate(len-c)+1);
    dp[len]=mx;
    return mx;
}

int main()
{
    memset(dp,-1,sizeof dp);

    cin>>n>>a>>b>>c;

    cout<<calculate(n)<<endl;
    return 0;
}
