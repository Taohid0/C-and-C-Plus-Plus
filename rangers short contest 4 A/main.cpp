#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long a,b;
   cin>>a>>b;
   for(int i =1;i<25;i++)
   {
       a= a*2;
       cout<<a<<endl;
       if(a%b==0)
       {
           cout<<"Yes"<<endl;
           return 0;
       }
   }
   cout<<"No"<<endl;
    return 0;
}
