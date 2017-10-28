#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int arr[101][101],n,total;

    while(cin>>n)
    {
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        total  = 0;

        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                for(int k = 0;k<n;k++)
                {
                    if((i<j && j<k )||( i>j && j>k))
                        if(arr[i][j] && arr[j][k] && arr[k][i])
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                        total++;
                    }
                }
            }
        }
        cout<<"total:"<<total<<endl<<endl;
    }
    return 0;
}
