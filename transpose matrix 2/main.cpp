#include <iostream>

using namespace std;

int main()
{
    int mat[10][10];
    int m,n;
    cin>>m>>n;

    for(int i = 0;i<m;i++)
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
            cout<<mat[j][i]<<"\n"[!(j==n-1)];
        }
    }
    return 0;
}
