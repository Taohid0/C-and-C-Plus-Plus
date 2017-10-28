#include <bits/stdc++.h>

using namespace std;

int main()
{
    long a,b,c,sum=0,value,n;

    cin>>a>>b>>c;
    cin>>n;
    sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>value;
        if(a<b and value<b)
        {
            sum++;
        }
        else if(a>c and value>c)
        {
            sum++;
        }
        else if(value>b and value<c and a>b and c>a)
        {
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
