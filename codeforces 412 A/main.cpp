#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    bool rated = false,unrated =false;
    cin>>n;
    n--;
    cin>>a>>b;
    int p1=a;
    int p2=b;
    if(a!=b)rated=true;
    while(n--)
    {
        cin>>a>>b;
        if(a!=b)rated =true;
        else if(a>p1)
        {
            unrated=true;
        }
        p1=a;
        p2=b;
    }
    if(rated)cout<<"rated"<<endl;
    else if(unrated)
        cout<<"unrated"<<endl;
    else
        cout<<"maybe"<<endl;
    return 0;
}
