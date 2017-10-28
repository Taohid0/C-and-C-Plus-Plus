#include <bits/stdc++.h>

using namespace std;
int amount;
int coins[] = {1,5,10,25,50};
long long dp[15][30001];
long long calculate(int index,int amount)
{

    if(index>4){
     if(amount==0)
            return 1;

            return 0;
     }

    if(dp[index][amount]!=-1)
            return dp[index][amount];

    long long t1=0,t2=0;
    if(amount-coins[index]>=0)
    {
        t1 = calculate(index,amount-coins[index]);
    }

    t2 = calculate(index+1,amount);
    dp[index][amount] = t1+t2;

    return t1+t2;
}

int main()
{
    memset(dp,-1,sizeof(dp));



    while(cin>>amount)
    {


   long long ans = calculate(0,amount);


          //cout<<ans<<endl;
       if(ans>1)cout<<"There are "<<ans<<" ways to produce "<<amount<<" cents change."<<endl;
       else
        cout<<"There is only 1 way to produce "<<amount<<" cents change."<<endl;
    }
    return 0;
}
