#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,sum=0,value;
    cin>>n>>x;
    for (int i=0;i<n;i++)
    {
        cin>>value;
        sum+=value;
    }
    int r = abs(sum)/x;
    if(r*x<abs(sum))r++;
    cout<<r<<endl;
    return 0;
}
