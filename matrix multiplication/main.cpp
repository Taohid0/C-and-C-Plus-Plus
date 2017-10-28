#include <bits/stdc++.h>

using namespace std;

void multMatrix(int a[10][10],int b[10][10],int c[10][10],int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            c[i][j] = 0;

            for(int k =0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

int main()
{
    int a[][10]={{1,2,3},{3,4,5},{6,7,8}};
    int b[][10] = {{1,2,3},{3,4,5},{6,7,8}};
    int c[10][10];

    multMatrix(a,b,c,3);

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<c[i][j]<<"\n"[!(j==2)];
        }
    }
    return 0;
}
