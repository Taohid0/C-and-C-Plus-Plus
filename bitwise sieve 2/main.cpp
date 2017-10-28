#include <bits/stdc++.h>

using namespace std;

bitset<10000000>bset;

int main()
{

    int n = sqrt(1000000)+1;

    for(int i = 2;i<=n;i++)
    {
        if(!bset[i])
        for(int j = i*i;j<=1000000;j+=i)
             {
               bset[j]=1;
             }
    }


    for(int i = 2;i<=100;i++)
    {
        if(!bset[i])
            cout<<i<< " ";
    }

    return 0;
}
