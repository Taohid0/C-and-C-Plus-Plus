#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,counter = 0,value;
    cin>>a>>b;
    while(a--)
    {
        cin>>value;
        long long temp = ceil((double)value/b);
        counter+=temp;
        //cout<<temp<<endl;
    }
    //cout<<counter<<endl;
    long long r = ceil((double)counter/2);
    cout<<r<<endl;
    return 0;
}
