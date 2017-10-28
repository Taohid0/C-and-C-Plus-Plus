#include <bits/stdc++.h>

using namespace std;

int arr[1001],t,toMake,num;
int dp[1001][1001];
bool isPossible(int indx,int n)
{
    bool r1=false,r2 =false;
    if(indx==num)
    {
        if(n==0)return true;
        return false;
    }
    if(dp[indx][n]!=-1)return dp[indx][n];
    if(n-arr[indx]>=0)
    {
        r1 =  isPossible(indx+1,n-arr[indx]);
    }

    r2 = isPossible(indx+1,n);
    dp[indx][n] = r1|r2;
    return dp[indx][n];

}

int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof (dp));
        cin>>toMake;
         cin>>num;
         for(int i  = 0;i<num;i++)
         {
             cin>>arr[i];
         }
         bool r = isPossible(0,toMake);
         if(r)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }


    return 0;
}
