#include <bits/stdc++.h>

using namespace std;

unsigned long long dp[35][35];
unsigned long long calculate(int n,int k)
{
    unsigned long long r;
    if(k==1)
        return n;
    else if(n==k)
        return 1;
    else if(dp[n][k]!=-1)
    {
        return dp[n][k];
    }
    else
        r = calculate(n-1,k)+calculate(n-1,k-1);
    dp[n][k] = r;
    return r;
}

int main()
{
    unsigned long long test,n,k;
    cin>>test;
    for(int i = 1;i<=test;i++)
    {
        memset(dp,-1,sizeof dp);
        cin>>n>>k;

        if(k==0)

            cout<<"Case "<<i<<": "<<1<<endl;
        else if(k>n)
        {cout<<"Case "<<i<<": ";
            cout<<0<<endl;
        }
        else
        {
            unsigned long long s = 1;
            for(unsigned long long ii = n-k+1;ii<=n;ii++)
            {
                s*=ii;
            }
            unsigned long long r = calculate(n,k);
            cout<<"Case "<<i<<": "<<r*s<<endl;
            //cout<<r<<endl;
        }
    }
    return 0;
}
