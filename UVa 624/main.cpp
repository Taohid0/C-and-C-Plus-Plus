#include <bits/stdc++.h>

using namespace std;

int arr[1000],dp[1000][1000],dir[1000],n,capacity;

int calculate(int i,int w)
{
    if(i>n)
        return 0;
    if(dp[i][w!=-1)
        return dp[i];

    int ret1=0,ret2=0;

    if(arr[i]+w<=capacity)
    {
        ret1=arr[i]+calculate(i+1,arr[i]+w);
    }
    ret2=calculate(i+1,arr[i]);
    dp[i][w]=max(ret1,ret2);
    return dp[i][w];
}

int main()
{
    while(scanf("%d",&capacity)==1)
    {
        cin>>n;
        for(int i =1;i<=n;i++)
            cin>>arr[i];
        memset(dp,-1,sizeof dp);
        memset(dir,-1,sizeof dir);

        int r =calculate(1,0);
        cout<<r<<endl;

    }
    return 0;
}
