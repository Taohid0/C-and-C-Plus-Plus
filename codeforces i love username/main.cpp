#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mx =-1,mn=9999999,counter=0,value;

    cin>>n>>value;
    mx = value;
    mn =value;

    n--;
    while(n--)
    {
        cin>>value;
        if(value>mx)
        {
            mx =value;
            counter++;
        }
        else if(value<mn)
        {
            counter++;
            mn =value;
        }
    }
    cout<<counter<<endl;
    return 0;
}
