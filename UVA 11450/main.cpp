#include <bits/stdc++.h>

using namespace std;

int M,C,price[22][22],arr[202][22];

int shop(int money,int g)
{
    if(money<0)return -100000;
    if(g==C)return M-money;
    if(arr[money][g]!=-1)return arr[money][g];
    int ans = -1;
    for(int i = 1;i<=price[g][0];i++)
    {
        ans =max(ans,shop(money-price[g][i],g+1));
    }
    return arr[money][g]=ans;
}

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin>>test;
    while(test--)
    {
        memset(arr,-1,sizeof(arr));

        cin>>M>>C;
        for(int i = 0;i<C;i++)
        {
            cin>>price[i][0];
            for(int j = 1;j<=price[i][0];j++)
            {
                cin>>price[i][j];
            }
        }
        int result = shop(M,0);
        if(result<0)cout<<"no solution"<<endl;
        else cout<<result<<endl;
    }

    return 0;
}
