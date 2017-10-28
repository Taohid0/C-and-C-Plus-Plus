#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k[5],total;
    cin>>k[0]>>k[1]>>k[2]>>k[3]>>total;
    long long  r = 0;
    for(int i = 1;i<=total;i++)
    {
        if(i%k[0]==0 || i%k[1]==0 ||i%k[2]==0 ||i%k[3]==0 )r++;
    }


    cout<<r<<endl;
    return 0;
}
