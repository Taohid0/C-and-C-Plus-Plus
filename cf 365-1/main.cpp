#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,c,mr1 = 0,mr2=0;

     cin>>n;
     while(n--)
     {
         cin>>m>>c;
         if(m>c)
         {
             mr1++;
         }
         else if(m<c)
         {
             mr2++;
         }
     }
     if(mr1>mr2)
        cout<<"Mishka"<<endl;
     else if(mr2>mr1)
     {
         cout<<"Chris"<<endl;
     }
     else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
