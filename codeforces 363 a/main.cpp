#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,i1,i2;
   string s;
   int indx=0;
   long long result =9999999999;
   cin>>n;
   cin>>s;
   cin>>i1;
   for(int i = 0;i<n-1;i++)
   {
       cin>>i2;
       if(s[indx]=='R' && s[indx+1]=='L')
       {
           if((abs(i1-i2)/2)<result)
           {
               result = (abs(i1-i2)/2);
           }
       }
       indx++;
       i1 = i2;
   }
   if(result==9999999999)cout<<-1<<endl;
   else
   cout<<result<<endl;

    return 0;
}
