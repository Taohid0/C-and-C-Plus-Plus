#include <bits/stdc++.h>

using namespace std;

bool isRepeated(int n)
{
    int rArray[10]=  {0};
    while(n)
    {
        int t=n%10;
        n/=10;
        if(rArray[t]==0)
        {
            rArray[t]++;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int r = 0;
        if(n>m)swap(n,m);
        for(int i = n;i<=m;i++)
        {
            if(isRepeated(i))r++;
        }
        printf("%d\n",r);
    }
    return 0;
}
