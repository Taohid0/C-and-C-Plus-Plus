#include <bits/stdc++.h>

using namespace std;

int arr[1000],dp[1000][1000],dir[1000][1000],n,capacity;

int calculate(int i,int w)
{
    if(i>n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];

    int ret1=0,ret2=0;

    if(arr[i]+w<=capacity)
    {
        ret1=arr[i]+calculate(i+1,arr[i]+w);
    }
    ret2=calculate(i+1,w);
    if(ret1>ret2)
    {
        dp[i][w]=ret1;
        dir[i][w]=1;
    }
    else
    {
        dp[i][w]=ret2;
        dir[i][w]=2;
    }
    return dp[i][w];
}
void prnt(int i,int w)
{
    if(dir[i][w]==-1)
        return;
    if(dir[i][w]==1)
    {
        cout<<arr[i]<<" ";
        prnt(i+1,w+arr[i]);
    }
    else
    {
        prnt(i+1,w);
    }
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
        prnt(1,0);
        cout<<"sum:"<<r<<endl;


    }
    return 0;
}
