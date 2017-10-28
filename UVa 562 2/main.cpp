#include <bits/stdc++.h>

using namespace std;

int dp[105][50005],arr[105];
int mn,n,half;

int calculate(int i,int w)
{
    if(i>n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int ret1=0,ret2=0;

    if(w+arr[i]<=half)
    {
        ret1 =arr[i]+calculate(i+1,w+arr[i]);
    }
    ret2 = calculate(i+1,w);
    dp[i][w]=max(ret1,ret2);
    return dp[i][w];
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof dp);
        mn = INT_MAX;
        int total=0;
        cin>>n;
        for(int i = 1;i<=n;i++)
        {
            cin>>arr[i];
            total+=arr[i];
        }
        half=total/2;
        int r= calculate(1,0);
        //cout<<r<<endl;
        int other =total-r;
        cout<<other-r<<endl;
    }
    return 0;
}
