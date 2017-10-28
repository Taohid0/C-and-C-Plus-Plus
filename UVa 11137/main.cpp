#include <bits/stdc++.h>

using namespace std;
int arr[25];
int dp[20][10005];
int total;
long long calculate(int i,int w)
{
    //cout<<i<<" "<<w<<endl;
    if(dp[i][w]!=-1)return dp[i][w];
    if(i==22)
    {
        if(w==0)return 1;
        return 0;
    }
    long long r1=0,r2=0,r3=0;
    if(w-arr[i]>=0)
    {
        r1 = calculate(i,w-arr[i]);
        r2 = calculate(i+1,w-arr[i]);
    }
    r3 = calculate(i,w);
    long long r4 = calculate(i+1,w);

    dp[i][w]= r1+r2+r3+r4;
    return dp[i][w];

}

int main()
{
    for(int i=1;i<=21;i++)
    {
    arr[i]=i*i*i;
    }

    memset(dp,-1,sizeof dp);
    while(cin>>total)
    {
        long long r = calculate(1,total);
        cout<<r<<endl;
    }
    return 0;
}
