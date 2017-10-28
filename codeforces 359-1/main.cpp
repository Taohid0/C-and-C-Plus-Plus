#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x,dis=0,additional;
    char c;
    cin>>n>>x;
    for(int i = 1;i<=n;i++)
    {
        cin>>c>>additional;
        if(c=='+')
        {
            x+=additional;
        }
        else
        {
            if(x>=additional)
            {
                x-=additional;
            }
            else dis++;
        }
    }
    cout<<x<<" "<<dis<<endl;

    return 0;
}
