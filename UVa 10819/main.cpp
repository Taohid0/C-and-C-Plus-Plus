#include <bits/stdc++.h>

using namespace std;

int capacity,n,dp[101][15001],profit[101],weight[101],m;

bool flag=true;
int calculate(int i,int w)
{
    if(w>capacity and capacity<=1800)
        return INT_MIN;
    if(w>capacity+200)
    {
        return INT_MIN;
    }

    if(i>n)
        {
            if(w>capacity and w<=capacity+200 and w<=2000)
                return INT_MIN;

            return 0;
        }

    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }

    int ret1=0,ret2=0;


    ret1 =profit[i]+ calculate(i+1,w+weight[i]);

    ret2 = calculate(i+1,w);
    dp[i][w] = max(ret1,ret2);
    return dp[i][w];
}

int main()
{

    while(scanf("%d%d",&capacity,&n)==2)
    {

        memset(dp,-1,sizeof dp);
        for(int i=1;i<=n;i++)
        {
            cin>>weight[i]>>profit[i];
        }

        int r = calculate(1,0);
        cout<<r<<endl;
    }
    return 0;
}
