#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,time;
    vector<long long>v;
    cin>>n>>time;
    long long value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);
    }
    long long r1=0,r2=0,t1=0,t2=0;
    for(int i=0;i<n;i++)
    {
        if(r1+v[i]<=time)r1+=v[i],t1++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(r2+v[i]<=time)r2+=v[i],t2++;
        else break;
    }

    if(t1<t2)cout<<"Nathan"<<endl;
    else if(t1>t2)cout<<"Yan"<<endl;
    else cout<<"Empate"<<endl;
    return 0;
}
