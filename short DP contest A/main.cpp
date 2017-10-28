#include <bits/stdc++.h>

using namespace std;
long int dp[100000000];
long int calculate(int n)
{
    if(n==1)return 2;
    else if(n==2)return 4;
    else if(n==3)return 3;
    else if(n==4)return 4;
    else if(dp[n]!=-1)
        return dp[n];
    long int r = calculate(n-1)+calculate(n-2);
    dp[n]=r;
    return r;
}
int main()
{
    int n,counter=1,test;
    memset(dp,-1,sizeof dp);
    cin>>test;
    while(test--)
    {
        cin>>n;
        long int ans = calculate(n);
        cout<<counter++<<" "<<ans<<endl;

    }
    return 0;
}
