#include <bits/stdc++.h>

using namespace std;

int main()
{
   long  long c, j=0,n;
    long long cnt = 0;
    cin>>c>>n;

    int temp = sqrt(n);
    for(int i = 1;i<=c;i++)
    {
        for( j= 1;j<=c;j++)
        {
            if(i*j==n)
            {
                cnt++;
            }   if(j>temp && i>temp)
    {
        break;
    }
        }

    }
    cout<<cnt<<endl;
    return 0;
}
