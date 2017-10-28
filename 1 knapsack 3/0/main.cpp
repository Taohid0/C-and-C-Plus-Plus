#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,sg,profit[100],weight[100],matrix[100][100];

     freopen("a.txt","r",stdin);

    cin>>n>>sg;

  //  cout<<n<< " " <<sg<<endl;

    for(int i = 0;i<n;i++)
    {
        cin>>profit[i]>>weight[i];
    }

    for(int i = 0;i<=sg;i++)
    {
        if(weight[0]<=i)
        {
            matrix[0][i] = profit[0];
        }
        else
            matrix[0][i]= 0;

            cout<<matrix[0][i]<< " ";
    }
    cout<<endl;

    for(int i= 1;i<n;i++)
    {
        for(int j = 0;j<=sg;j++)
        {
            if(weight[i]>j)
            {
                matrix[i][j]=  matrix[i-1][j];

            }
            else
                matrix[i][j] = max(matrix[i-1][j],profit[i]+matrix[i-1][j-weight[i]]);

                cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<matrix[n-1][sg];


    return 0;
}
