#include <bits/stdc++.h>

using namespace std;

int dp[105][105];
int row,column;
int dirx[] = {1,0,-1,0};
int diry[]= {0,1,0,-1};
int arr[105][105];

int longestPath(int r,int c)
{
    if(dp[r][c]!=-1)return dp[r][c];
    int mx=0;
    for(int i = 0;i<4;i++)
    {
        int x = r+dirx[i];
        int y = c+diry[i];
        if((x<row and x>=0 and y<column and y>=0)and arr[x][y]<arr[r][c] )
        {

            mx=max(mx,longestPath(x,y)+1);
        }

    }
    //cout<<arr[r][c]<< " "<< r<<" "<<c<<" "<<mx<<endl;
    dp[r][c]=mx;
    return mx;
}

int main()
{
   int test;
   string name;
   cin>>test;
   while(test--)
   {
       memset(dp,-1,sizeof dp);
       cin>>name;
       cin>>row>>column;
       for(int i=0;i<row;i++)
       {
           for(int j = 0;j<column;j++)
           {
               cin>>arr[i][j];
           }
       }
       int mx=0;
       for(int i=0;i<row;i++)
       {
           for(int j=0;j<column;j++)
           {

               if(dp[i][j]==-1)
               //memset(dp,-1,sizeof dp);
                mx=max(mx,longestPath(i,j));
           }
       }
       cout<<name<<": "<<mx+1<<endl;
   }
    return 0;
}
