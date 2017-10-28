#include <bits/stdc++.h>

using namespace std;

int arr[10005][105],dp[10005][105],n;


int calculate(int row,int col,bool flag)
{

    int m1=INT_MIN,m2=INT_MIN;
    if(dp[row][col]!=-1)return dp[row][col];
    if(row>=2*n-1 or col<0)return 0;
    //if(col>=n or row>=n*2 or col<0)return 0;

    if(row==n-1)
    {
        flag = false;
    }
    m1 =arr[row][col]+calculate(row+1,col,flag);
    if(flag and arr[row+1][col+1]!=-1000)
        m2=arr[row][col]+calculate(row+1,col+1,flag);
    else if(col-1>=0 and arr[row+1][col-1]!=-1000)
    {
        m2=arr[row][col]+calculate(row+1,col-1,flag);
    }
    //cout<<row<<" "<<col<<endl;
    dp[row][col]= max(m1,m2);
    return dp[row][col];
}

int main()
{
    int test,counter,col;
    cin>>test;

    for(int T =1;T<=test;T++)
    {
        memset(dp,-1,sizeof(dp));
        memset(arr,0,sizeof arr);

        bool flag =true;
        cin>>n;
        counter=1;
        for(int row=0;row<2*n;row++)
        {
            for(col=0;col<counter;col++)
            {
                cin>>arr[row][col];

            }
            arr[row][col+1]=-1000;
            if(counter==n)flag=false;
        if(flag)counter++;
        else
            counter--;
        }


        int r = calculate(0,0,true);
        cout<<"Case "<<T<<": "<<r<<endl;

    }

    return 0;
}
