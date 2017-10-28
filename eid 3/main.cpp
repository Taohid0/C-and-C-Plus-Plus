#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long test,value,r;
    scanf("%lld",&test);

    for(long long  i = 1;i<=test;i++)
    {
        r = 0;
        scanf("%lld",&value);
        for(int j =1;j<=ceil(value/3);j++)
        {
            long long temp = value-j;
            long long t = ceil(temp/2)-1;
            cout<<j<<" "<<t<<endl;
            r = r+t;
            if(j<=t-1)
            {

            }
        }
        printf("Case %lld: %lld\n",i,r);
    }
    return 0;
}
