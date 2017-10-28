#include <bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
   int n,test;
   cin>>test;

   while(test--)
   {   string s;
       int position  = 0;
       int currentPosition[102] = {0};
       cin>>n;
       int index = 1;

       while(n--)
       {
           cin>>s;

           if(s=="LEFT")
           {
               position--;
               currentPosition[index++]= -1;
           }
           else if(s=="RIGHT")
           {
               position++;
               currentPosition[index++] = 1;
           }
           else
           {  int p;
               cin>>s>>p;
               position+=currentPosition[p];
               currentPosition[index++] = currentPosition[p];
           }
       }
       cout<<position<<endl;

   }
    return 0;
}
