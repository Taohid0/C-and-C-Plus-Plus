#include <iostream>

using namespace std;

int main()
{
   long long n,sum=0,value,odd = 999999999;
   cin>>n;
   while(n--)
   {
       cin>>value;
       sum+=value;
       if(value%2)
       {
           odd= min(value,odd);
       }

   }
   if(!(sum%2))cout<<sum;
   else
    cout<<sum-odd;
    return 0;
}
