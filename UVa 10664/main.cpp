#include <bits/stdc++.h>

using namespace std;

int n,arr[1000],dp[1000][1000],sum,half;

bool calculate(int i,int w)
{
    if(i==n)
    {
        if(w==half)
            return true;
    }
    if(i>n)
        return false;
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    bool ret1=false,ret2=false;
    if(arr[i]+w<=half)
    {
        ret1 = calculate(i+1,arr[i]+w);
    }
    ret2 =calculate(i+1,w);
    dp[i][w]=ret1 or ret2;
    return dp[i][w];
}

int main()
{
    int test;
    string s;
    cin>>test;
    getchar();
    while(test--)
    {
        sum=0;
        n=1;
        getline(cin,s);
        istringstream ss(s);
        int value;
        while(ss>>value)
        {
            arr[n++]=value;
            sum+=value;
        }
        n--;
        half=sum/2;
        if(half*2!=sum)
        {
            cout<<"NO"<<endl;
        }
        else
            {
            memset(dp,-1,sizeof dp);
            bool r =calculate(1,0);
            if(r)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
