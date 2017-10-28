#include <bits/stdc++.h>

using namespace std;

int main()
{

    long int test,n1,n2;
    scanf("%ld",&test);
    for(long int i = 1;i<=test;i++)
    {
        scanf("%ld%ld",&n1,&n2);
        printf("Case %ld: %ld\n",i,n1-n2-1);
       // cout<<"Case "<<i<<": "<<n1-n2-1<<endl;
    }
    return 0;
}
