#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m;
    if(n%2==0)
    {
        k=n/2;
    }
    else
    {
        k=n/2+1;
    }
    while(k<=n)
    {
        if(k%m==0)
        {
            printf("%d\n",k);
            return 0;
        }
        k++;
    }
    printf("-1\n");
    return 0;
}
