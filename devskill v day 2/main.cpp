#include <bits/stdc++.h>

using namespace std;


bitset<10000000>bset;
vector<int>v;
int main()
{
   ios_base::sync_with_stdio(0) ;

    int n = 10000000;

    for(int i = 2;i<=n;i++)
    {
        if(!bset[i])
        for(int j = i*i;j<=1000000;j+=i)
             {
               bset[j]=1;
             }
    }


    for(int i = 2;i<=100000000;i++)
    {
        if(!bset[i])
           v.push_back(i);
    }
    long long n;
    cin>>n;

    int sqn=sqrt(n);

    int i=0;
    bool test=false,n=false;
    while(sqn<v[i])
    {
        int temp=n;
        test=false;
        while(n%v[i]==0)
        {
            n/=v[i];
            test=true;
        }
        if(test==false)
        {
            n=true;
            break;
        }
    }

    return 0;
}
