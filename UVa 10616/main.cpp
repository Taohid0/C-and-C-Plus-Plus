#include <bits/stdc++.h>

using namespace std;

int dp[202][50][25],arr[2000];
int m,d,n;

int calculate(int i,int w,int cnt)
{

    if(cnt==m)
    {
        if(w%d==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(i>n or cnt>m)return 0;
    if(dp[i][w%d][cnt]!=-1)
    {
        return dp[i][w%d][cnt];
    }
    int ret1 =calculate(i+1,w%d,cnt);
    int ret2 =calculate(i+1,(w+arr[i])%d,cnt+1);
    dp[i][w%d][cnt]=ret1+ret2;
    return ret1+ret2;
}

int main()
{
    int q,c=1;
    while(scanf("%d%d",&n,&q)==2)
    {
        if(!n and !q)break;
        for(int i =1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        cout<<"SET "<<c++<<":"<<endl;
        for(int i=1;i<=q;i++)
        {
            scanf("%d%d",&d,&m);
            memset(dp,-1,sizeof dp);
            int r = calculate(1,0,0);
            cout<<"QUERY "<<i<<": "<<r<<endl;

        }
    }
    return 0;
}
