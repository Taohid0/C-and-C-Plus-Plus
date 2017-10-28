#include <bits/stdc++.h>

using namespace std;
long long cnt[(int)1e6+10];
long long dp[1000006];

//long long calculate(int value)
//{
//    cout<<value<<endl;
//    if(dp[value]!=-1)return dp[value] ;
//    if(value==0)return 0;
//    if(value==1)
//    {
//        return 1;
//    }
//
//    long long mx= max(calculate(value-1),1LL);//calculate(value-2)+cnt[value]*value);
//    dp[value]=mx;
//    cout<<mx<<endl;
//    return mx;
//}

int main()
{
    memset(dp,-1,sizeof dp);
    int n,value;
    cin>>n;
    while(n--)
    {
        cin>>value;
        cnt[value]++;
    }
    dp[0]=0;
    dp[1]=1;
    long long r=0;
    for(int i =2;i<=100000;i++)
    {
        r =max(r,max(dp[i-1],dp[i-2]+cnt[i]*i)) ;
        dp[i]=r;
    }
    cout<<dp[100000]<<endl;
    return 0;
}
