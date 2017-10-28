#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long start,en,timePass,visitors,value;
   vector<long long>v;
   cin>>start>>en>>timePass;
   cin>>visitors;

   int r;
   bool result = false;
   for(int i =0;i<visitors;i++)
   {
       cin>>value;
       v.push_back(value);
   }
   sort(v.begin(),v.end());
   if(v[0]>start)
   {
       cout<<start<<endl;
       return 0;
   }
   for(int i = 1;i<visitors;i++)
   {
       if(v[i-1]-v[i]>timePass )
       {
           cout<<v[i-1]+timePass<<endl;
           return 0;
       }
   }
    return 0;
}
