#include <iostream>

using namespace std;

int expo(int x,int n)
{
    int result = 1;
    int z=x;
    while(n>0)
    {
        while(n%2==0)
        {
            z = z*z;
            n/=2;
        }
        result*=z;
        n--;
    }
    return result;
}

int main()
{

   int x,n;
   cin>>x>>n;

   int r = expo(x,n);

   cout<<r;

    return 0;
}
