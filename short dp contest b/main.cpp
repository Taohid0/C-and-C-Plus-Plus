#include <bits/stdc++.h>

using namespace std;
int dp[1001][51],weight[10000],value[10000],sg,n;
int calcualte(int wt,int i)
{
    if(i==n)return 0;
    else if(dp[wt][i]!=-1)return dp[wt][i];
    int s1=0,s2=0;
    if(wt+weight[i]<=sg)
    {
        s1 = calcualte(wt+weight[i],i+1)+value[i];
    }
    s2 = calcualte(wt,i+1);
    dp[wt][i]=max(s1,s2);

    return dp[wt][i];
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof dp);
        cin>>sg>>n;
        for(int i = 0;i<n;i++)
            cin>>weight[i]>>value[i];
        int r  = calcualte(0,0);
        cout<<"Hey stupid robber, you can get "<<r<<"."<<endl;
    }
    return 0;
}
