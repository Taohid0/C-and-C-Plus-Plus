#include <bits/stdc++.h>

using namespace std;

string converted_base(int n,int b)
{
    string r = "";
    string chars="0123456789ABCDEFGHIJ";

    while(n)
    {
        int temp=n%b;
        n/=b;
        r=chars[temp]+r;
    }
    return r;
}

int main()
{
    string result=converted_base(500,8);
    cout<<result;
    return 0;
}
