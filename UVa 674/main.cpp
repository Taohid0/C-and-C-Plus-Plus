#include <bits/stdc++.h>

using namespace std;

int coins[10] = {1,5,10,25,50};
int matrix[8000][8000];

int calculateCoins(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)return 1;

        return 0;
    }
    if(matrix[i][amount]!=-1)
    {
        return matrix[i][amount];
    }
    int ret1=0,ret2=0;

    if(amount-coins[i]>=0)
    {
        ret1 = calculateCoins(i,amount-coins[i]);
    }
    ret2 = calculateCoins(i+1,amount);

    matrix[i][amount] = ret1+ret2;
    return matrix[i][amount];

}
int main()
{
    memset(matrix,-1,sizeof(matrix));
   int value;

   while(cin>>value)
   {
       value = calculateCoins(0,value);
       cout<<value<<endl;
   }

    return 0;
}
