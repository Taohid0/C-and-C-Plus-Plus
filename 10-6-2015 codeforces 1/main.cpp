#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,k;
    cin>>n>>t;
    if(t!=10){
    for(i=0;i<n;i++)
    {
        cout<<t;
    }
    }
    else
    {
        if(n==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        cout<<1;
        for(i=0;i<n-1;i++)
            cout<<0;

    }
    cout<<endl;
}
