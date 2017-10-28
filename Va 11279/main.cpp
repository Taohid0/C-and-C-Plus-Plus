#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c1,c2,n,value;

    for(int t=1;;t++)
    {
        cin>>n;
        if(!n)return 0;
        c1=0,c2=0;
        while(n--)
        {
            cin>>value;
            if(!value)c2++;
            else
                c1++;
        }
        cout<<"Case "<<t<<": "<<c1-c2<<endl;

    }
    return 0;
}
