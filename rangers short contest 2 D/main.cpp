#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    int n,r;
    cin>>n>>s1>>s2;
    //cout<<s1<< " "<<n<<" "<<s2<<endl;
    if(s2=="month")
    {
        if(n<=28)r = 12;
        else if(n==29)r=12;
        else if(n==30)r = 11;
        else r=7;
        cout<<r<<endl;
    }
    else{
        r = 52;
        if(n==5 or n==6)r++;
        cout<<r<<endl;}


    return 0;
}
