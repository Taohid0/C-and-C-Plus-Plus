#include <iostream>

using namespace std;

int main()
{
    int counter = 0;char n;
    while(cin>>n)
    {
        if(n=='7' or n=='4')counter++;
    }

    if(counter==4 or counter==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
