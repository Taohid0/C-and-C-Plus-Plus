#include <bits/stdc++.h>

using namespace std;

long long power(int n)
{
    long long sum=1;
    long long counter=1;
    for(int i = 1;i<=n;i++)
        sum*=2;

    int digits=floor(log10(sum)+1);
    //cout<<digits<<endl;
    for(int i=1;i<=digits-1;i++)
        counter*=10;
    //cout<<counter<<endl;
    return sum/counter;
}

int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)cout<<'-'<<power(n)<<endl;
        else
            cout<<'+'<<power(n)<<endl;
    }
    return 0;
}
