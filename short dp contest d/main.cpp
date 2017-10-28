#include <bits/stdc++.h>

using namespace std;
long long int dp[10004],n;
long long int arr[10004];
long long int calculate(int indx)
{
    if(indx>n)return 0;
    if(indx==n)return arr[indx];
    else if(dp[indx]!=-1)return dp[indx];
    long long int r = max((arr[indx]+calculate(indx+2)),calculate(indx+1));
    dp[indx]=r;
    return r;
}

int main()
{
    int test;
    cin>>test;


    for(int i = 1;i<=test;i++)
    {
        memset(dp,-1,sizeof dp);
        cin>>n;
        for(int j=1;j<=n;j++)
            cin>>arr[j];
        long long int ans = calculate(1);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
