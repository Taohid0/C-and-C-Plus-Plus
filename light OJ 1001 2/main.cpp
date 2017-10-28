#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,a;
   cin>>n;
   while(n--)
   {
       cin>>a;
       if(a<=10)
       {
           cout<<0<< " "<<a<<endl;
       }
       else
        cout<<a-10<< " "<<10<<endl;
   }
    return 0;
}
