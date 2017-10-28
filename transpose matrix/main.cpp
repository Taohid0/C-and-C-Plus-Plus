#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[10][10];
    int m,n;
    cin>>m>>n;

    for(int i= 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<mat[i][j]<<"\n"[!(j==n-1)];
        }

    }
     cout<<endl<<endl;
     int i = 0,j = 0;
    for(i=0;i<m;i++)
    {
        for(;j<n;j++)
        {
            if(i!=j)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
       j++;
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<mat[i][j]<<"\n"[!(j==n-1)];
        }
    }
    return 0;
}
