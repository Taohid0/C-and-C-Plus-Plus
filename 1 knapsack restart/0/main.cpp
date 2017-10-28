#include <bits/stdc++.h>

using namespace std;

int dp[100][100],n,arr[100],capacity,profit[100],taken[100][100];

int calculate(int i,int w)
{
    if(i>n)
    {
        return 0;
    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    int ret1=0,ret2=0;
    if(arr[i]+w<=capacity)
    {
        ret1=profit[i]+calculate(i+1,arr[i]+w);
    }
    ret2 = calculate(i+1,w);
    dp[i][w]=max(ret1,ret2);
    if(ret1>ret2)
    {
        dp[i][w]=ret1;
        taken[i][w]=1;
    }
    else
    {
        dp[i][w]=ret2;
        taken[i][w]=2;
    }
    return dp[i][w];
}
void print(int i,int w)
{
    if(taken[i][w]==-1)
    {
        return;
    }
    if(taken[i][w]==1)
    {
        cout<<i<<" ";
        print(i+1,arr[i]+w);
    }
    else print(i+1,w);
}

int main()
{
    memset(dp,-1,sizeof dp);
    memset(taken,-1,sizeof taken);
    cin>>capacity>>n;
    for(int i =1;i<=n;i++)
    {
        cin>>arr[i]>>profit[i];
    }
    int r = calculate(1,0);
    cout<<r<<endl;
    print(1,0);
    return 0;
}
