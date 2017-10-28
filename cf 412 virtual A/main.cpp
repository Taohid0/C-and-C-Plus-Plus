#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,p1,p2;
    cin>>n;
    cin>>p1>>p2;
    n--;
    bool rated=false,not_sorted=false;
    if(p1!=p2)rated =true;
    while(n--)
    {
        cin>>a>>b;
        if(a!=b)rated =true;
        else if(p1<a)not_sorted=true;
        p1=a;
        p2=b;
    }
    if(rated)cout<<"rated"<<endl;
    else if(not_sorted)cout<<"unrated"<<endl;
    else
        cout<<"maybe"<<endl;
    return 0;
}
