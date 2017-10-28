#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter;
    cin>>n;
    int a,b,c;
    int r = 0;
    for(int I = 0;I<n;I++)
    {
        counter = 0;
        cin>>a>>b>>c;
        if(a)counter++;
        if(b)counter++;
        if(c)counter++;
        if(counter>1)r++;
    }
    cout<<r;
    return 0;
}
