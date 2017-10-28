#include <bits/stdc++.h>

using namespace std;
int arr[25];
long long  dp[25][10005];
int total;
long long calculate(int i,int w)
{
    //cout<<i<<" "<<w<<endl;
    if(dp[i][w]!=-1)return dp[i][w];
    if(w==0)return 1;
    if(i==22)
    {
        return 0;
    }
    long long r1=0,r2=0;
    if(w-arr[i]>=0)
    {
        r1 = calculate(i,w-arr[i]);
        //r2 = calculate(i+1,w-arr[i]);
    }

    long long r4 = 0;
    r4 =calculate(i+1,w);

    dp[i][w]= r1+r2+r4;
    return dp[i][w];

}

int main()
{
    for(int i=1;i<=21;i++)
    {
    arr[i]=i*i*i;
    //cout<<arr[i]<<" ";
    }

    memset(dp,-1,sizeof dp);
    while(cin>>total)
    {

        long long r = calculate(1,total);

        cout<<r<<endl;
    }
    return 0;
}
