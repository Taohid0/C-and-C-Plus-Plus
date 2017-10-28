#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test;
   string s;

   cin>>test;

   while(test--)
   {
       cin>>s;
       if(s=="1" || s=="4" || s=="78")
       {
           cout<<"+";
       }
       else if(s.substr((int)s.size()-2,2)=="35")
       {
           cout<<"-";
       }
       else if(s[0]=='9' && s[(int)s.size()-1]=='4')
       {
           cout<<"*";
       }
       else
       {
           cout<<"?";
       }
       cout<<endl;
   }
    return 0;
}
