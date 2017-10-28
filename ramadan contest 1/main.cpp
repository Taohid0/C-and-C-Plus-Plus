#include <bits/stdc++.h>

using namespace std;

int main()
{
   string command;
     int value;
     int test;
   cin>>test;int r = 0;
   for(int P = 0;P<test;P++)
   {
       cin>>command>>value;
       if(command=="SUBTRACT")
       {
          for(int i = 1;i<=100;i++)
          {
              if(value!=0)
              if(i-value<0)r++;
          }
       }
       else if(command=="DIVIDE")
       {
           for(int i = 1;i<=100;i++)
          {
              if(value!=0)
              if(i%value!=0)r++;
          }
       }
   }
   cout<<r<<endl;
}
