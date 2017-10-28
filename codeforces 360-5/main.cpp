#include <bits/stdc++.h>

using namespace std;

int arr[1001],t,num;
int dp[505][505];
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
{   vector<int>r;
    r.push_back(0);
    //ios::sync_with_stdio(false);
    int coin;
    cin>>coin>>num;



         for(int i  = 0;i<coin;i++)
         {
             cin>>arr[i];
         }
         for(int i = 1;i<=num;i++) {
            memset(dp,-1,sizeof (dp));
           if(isPossible(0,i)){

             r.push_back(i);
         }
         }
         int l =(int)r.size();
         cout<<l<<endl;
       for(int i = 0;i<l;i++)
       {
           cout<<r[i]<< " ";
       }


    return 0;
}
