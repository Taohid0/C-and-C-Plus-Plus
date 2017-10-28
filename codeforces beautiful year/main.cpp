#include <bits/stdc++.h>

using namespace std;

bool isunique(int n)
{
    //cout<<n<<endl;
    int a = n%10;
    n/=10;
    int b = n%10;
    n/=10;
    int c =n%10;
    n/=10;
    int d = n;
    //cout<<a<<b<<c<<d<<endl;
    if(a!=b and b!=c and c!=d and a!=c and a!=d and b!=d and c!=d)return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i = n+1;;i++)
    {
        if(isunique(i))
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
