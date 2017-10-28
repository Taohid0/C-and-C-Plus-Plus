#include <bits/stdc++.h>

using namespace std;
int dp[1001][1001];
int calculate(int i,int j)
{
    int mx=0;
    if(i>0 && i<m && j>=0 && j<n)
    {
        if(dp[i][j]!=-1)return dp[i][j];
        int ret=-1000000;
        ret=max(ret,calculate(i+1))+arr[]
    }
}

int main()
{
     ios_base::sync_with_stdio(false);cin.tie(0);
     memset(dp,-1,sizeof(dp));
   int m,n;
   char arr[1001][1001];
   cin>>m>>n;
   for(int i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
        cin>>arr[i][j];
   }

    return 0;
}
