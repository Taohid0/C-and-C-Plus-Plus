#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,a,b;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            long long t=b;
            b=a;
            a=t;
        }
        if(a==1 and b==1){cout<<"Case "<<i<<": Even"<<endl;
        continue;}
        if(a==1)a++;
        long long dif=b-a+1;
        //cout<<dif<<endl;
        if(dif%2)
            cout<<"Case "<<i<<": Odd"<<endl;
        else
            cout<<"Case "<<i<<": Even"<<endl;
    }
    return 0;
}
