#include <bits/stdc++.h>

using namespace std;
int amount;
int coins[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
long long dp[15][40005];
unsigned long long calculate(int index,int amount)
{

    if(index>10){
     if(amount==0)
            return 1;

            return 0;
     }

    if(dp[index][amount]!=-1)
            return dp[index][amount];

    unsigned long long t1=0,t2=0;
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

    double input;

    while(cin>>input)
    {

        if(input==0.0)break;
          //cout<<input<<endl<<endl;
      //  amount =(float)(input+.001)*100;
      //printf("%f",input);
         amount = input*100;
        //  cout<<amount<<endl;

        unsigned long long ans = calculate(0,amount);


     printf("%6.2f%17llu\n",input,ans);
    }
    return 0;
}
