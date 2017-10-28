#include <bits/stdc++.h>

using namespace std;

void mult(int a[][10],int b[][10],int c[][10],int n,int m)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            c[i][j]=  0;

            for(int k = 0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
}

int main()
{
   int a[][10] = {{2,5},{5,6}};
   int b[][10] = {{2,6,5},{3,7,6}};
   int c[10][10];

   mult(a,b,c,2,3);

   for(int i = 0;i<2;i++)
   {
       for(int j = 0;j<3;j++)
       {
           cout<<c[i][j]<<"\n"[!(j==2)];
       }
   }
    return 0;
}
