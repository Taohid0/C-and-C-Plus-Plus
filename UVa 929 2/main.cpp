#include <bits/stdc++.h>

using namespace std;

int dirx[] ={1,-1,0,0};
int diry[]= {0,0,-1,1};
int dp[1005][1005],arr[1005][1005];
int m,n;
void calculate(int i,int j)
{
   priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
   pq.push({arr[i][j],{i,j}});
   dp[i][j]=arr[i][j];
   while(!pq.empty())
   {
        pair<int,pair<int,int> > u =pq.top();
        pq.pop();
        int d = u.first;
        int i = u.second.first;
        int j = u.second.second;
        if(d>dp[i][j])continue;

        for(int I=0;I<4;I++)
        {
            int x = dirx[I]+i;
            int y = diry[I]+j;

            if(x>=0 and y>=0 and x<m and y<n and dp[x][y]>dp[i][j]+arr[x][y])
            {
                dp[x][y] = dp[i][j] + arr[x][y];
                pq.push({dp[x][y],{x,y}});
            }
        }
   }
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        fill(&dp[0][0],&dp[1005][0],9999999);
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
                cin>>arr[i][j];
        }
        calculate(0,0);
        cout<<dp[m-1][n-1]<<endl;
    }
    return 0;
}
