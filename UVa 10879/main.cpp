#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long t,n;
   cin>>t;
   for(int i = 1;i<=t;i++)
   {
       cin>>n;
       int rt =sqrt(n)+1;

       int prnt = 0;
       cout<<"Case #"<<i<<": "<<n<<" ";
       for(int j =2;j<=rt;j++)
       {
           if(n%j==0){
                   cout<<" = "<<j<<" * "<<n/j;
                    prnt++;
               }

               if(prnt==2)
               {cout<<endl;
                   break;}

       }
   }
    return 0;
}
