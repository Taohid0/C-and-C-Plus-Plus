#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,inpt;
    cin>>k>>n;
    int r = 0;
    for(int i=0;i<n;i++)
    {
        cin>>inpt;
        if(-k+inpt+r>=0)
            r =-k+inpt+r;
        else
            r = 0;
    }
    cout<<r;
    return 0;
}
