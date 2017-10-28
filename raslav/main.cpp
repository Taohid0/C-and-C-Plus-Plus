#include <bits/stdc++.h>

using namespace std;

long long int p(long long int num,long long int n)
{
   long long int r = num;
    if(n==0)
    {
        return 1;
    }
    for(int i =2;i<=n;i++)
    {
        r*=i;
    }

    return r;
}

int main()
{
    bool flag = false;
    long long int l,r,k;
    cin>>l>>r>>k;
    long long int sum = 0;
    for(long long int i = 0 ;i<=1000000000000000000;i++)
    {
        sum = p(k,i);
        if(sum>=l && sum<=r)
        {
            cout<<sum<<" ";
            flag = true;
        }
        if(sum>r)break;
    }
    if(!flag)
        cout<<-1;
    cout<<endl;
    return 0;
}
