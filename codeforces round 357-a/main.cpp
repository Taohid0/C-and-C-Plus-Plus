#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    int n,before,after;
    bool r = false;
    cin>>n;
    while(n--)
    {

    cin>>name;
    cin>>before>>after;

    if(before<after && before>=2400)
    {
        r=true;
    }

    }
    if(r)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;
    return 0;
}
