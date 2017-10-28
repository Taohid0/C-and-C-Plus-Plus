#include <bits/stdc++.h>

using namespace std;
string toBinary(int n)
{
    string s = "";
    string t;
    char buf[100];
    while(n)
    {

        itoa(n%2,buf,10);
        s+=buf;
        n/=2;
    }
    reverse(s.begin(),s.end());

    return s;
}
int main()
{

       char buffer[]= "this time it should work"; cout<<int(buffer);
       itoa(100,buffer,10);

       cout<<buffer;
    return 0;
}
