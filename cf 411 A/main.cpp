#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    if(a==b)
    {
        cout<<a<<endl;
        return 0;
    }
    if(b-a==1)
    {
        cout<<2<<endl;
        return 0;
    }
    long long even = (b-a)/2;
    long long odd = (b-a)/3;

    //cout<<even<< " "<<odd<<endl;
    if(a%2==0)even++;
    if(b%2==0)even++;
    if(a%3==0)odd++;
    if(b%3==0)odd++;
    if(even>=odd)cout<<2<<endl;
    else
        cout<<3<<endl;
    return 0;
}
