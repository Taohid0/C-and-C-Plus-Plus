#include <bits/stdc++.h>

using namespace std;

int arr[55],dp[55][55];

int calculate(int strt,int endd)
{
    if(strt+1==endd)
    {
        return 0;
    }
    if(dp[strt][endd]!=-1)
        return dp[strt][endd];
    int  cost,minimum = 99999999;
    for(int i= strt+1;i<endd;i++)
    {
        cost = calculate(strt,i)+calculate(i,endd)+arr[endd]-arr[strt];
        if(minimum>cost)minimum = cost;
    }
    return dp[strt][endd]=minimum;
}

int main()
{
    int l,n;
    while(cin>>l)
    {
        if(!l)break;
        cin>>n;
        for(int i = 1;i<=n;i++)
        {
            cin>>arr[i];
        }
        memset(dp,-1,sizeof(dp));
        arr[0]= 0;
        arr[n+1]=  l;
        int r = calculate(0,n+1);
        cout<<"The minimum cutting is "<<r<<"."<<endl;

        }
    return 0;
}
