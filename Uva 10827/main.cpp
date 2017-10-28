#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  n,arr[105][105],sum,test;

    cin>>test;
    while(test--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>arr[i][j];
                if(i>0)arr[i][j]+=arr[i-1][j];
                if(j>0)arr[i][j]+=arr[i][j-1];
                if(i and j)arr[i][j]-=arr[i-1][j-1];
            }
        }
        sum=-75*18*19;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=i;k<n;k++)
                {
                    for(int l = j;l<n;l++)
                    {
                        int mx = arr[k][l];
                        if(i>0)mx-=arr[i-1][l];
                        if(j>0)mx-=arr[k][j-1];
                        if(i>0 and j>0)mx+=arr[i-1][j-1];
                        sum= max(mx,sum);
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
