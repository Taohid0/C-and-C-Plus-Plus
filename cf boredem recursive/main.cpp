#include <bits/stdc++.h>

using namespace std;

int dp[100005],cnt[100005];
int calculate(int i)
{

    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return cnt[1];
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int r = max(calculate(i-1),calculate(i-2)+cnt[i]*i);
    dp[i]=r;
    return dp[i];

}

int main()
{
    int n,value;
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>value;
        cnt[value]++;
    }
    int r = calculate(100000);
    cout<<r<<endl;
    return 0;
}
