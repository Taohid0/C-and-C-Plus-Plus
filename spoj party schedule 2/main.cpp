#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000],profict[1000],weight[1000],capacity,totalParty;

int calculateValue(int i,int w)
{
    if(i>totalParty)return 0;

    if(dp[i][w]!=-1)return dp[i][w];

    int profit1=-100,profit2=-100;

    if(w+weight[i]<=capacity)
    {
        profit1=profict[i]+calculateValue(i+1,w+weight[i]);
    }
    profit2=calculateValue(i+1,w);

    dp[i][w]= max(profit1,profit2);

    return dp[i][w];
}

int main()
{
    while(1)
    {
        memset(dp,-1,sizeof(dp));

        cin>>capacity>>totalParty;

        if(!capacity && !totalParty)break;

        for(int i=0;i<totalParty;i++)
        {
            cin>>weight[i]>>profict[i];
        }
        int ans= calculateValue(0,0);
        int r;
        //cout<<ans<<endl;
        for(int i=0;i<=capacity;i++)
        {
           if(dp[i][0]==ans)
           {
               r=i;
               break;
           }
        }
        cout<<dp[totalParty][capacity]<<endl;
        cout<<r<<" "<<ans<<endl;
    }
    return 0;
}
