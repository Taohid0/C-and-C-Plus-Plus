#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[200][200],n,mx;
    while(cin>>n){
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(i>0)arr[i][j]+=arr[i-1][j];
                if(j>0)arr[i][j]+=arr[i][j-1];
                if(i and j)arr[i][j]-=arr[i-1][j-1];
            }
        }

        mx=-100*101*127;

        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                int sum=0;
                for(int k=i;k<n;k++)
                {
                    for(int l=j;l<n;l++)
                    {
                        sum=arr[k][l];
                        if(i>0)sum-=arr[i-1][l];
                        if(j>0)sum-=arr[k][j-1];
                        if(i and j)sum+=arr[i-1][j-1];
                        mx=max(mx,sum);

                    }
                }
            }
        }

        cout<<mx<<endl;
    }

    return 0;
}
