#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,value,l,h;
    cin>>test;

    for(int i = 1;i<=test;i++)
    {
        int ans=0,mx;
        cin>>n;
        mx=0;
        l=0,h=0;
        int a=0;
        for(int j = 0;j<n-1;j++)
        {
            cin>>value;
            mx+=value;
            if(mx>ans or (mx==ans and h-l<j-a))
            {
                ans=mx;
                h=j+1;
                l=a;
            }
            if(mx<0)
            {
                mx=0;
                a=j+1;
            }
        }
        if(ans==0)
            cout<<"Route "<<i<<" has no nice parts"<<endl;
        else
            cout<<"The nicest part of route "<<i<<" is between stops "<<l+1<<" and "<<h+1<<endl;
    }
    return 0;
}
