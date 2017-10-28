#include <iostream>

using namespace std;

int main()
{
    long long a,b,temp=0;
    cin>>a>>b;

    while(a)
    {
        temp+=a;
        a/=b;

    }
    cout<<temp<<endl;
    return 0;
}
