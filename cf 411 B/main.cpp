#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int counter=1;
    for(int i=1;i<=n;i++)
    {
        if(counter<3)cout<<'a';
        else cout<<'b';
        counter++;
        if(counter>4)counter=1;
    }
    cout<<endl;
    return 0;
}
