#include <bits/stdc++.h>

using namespace std;
vector<long long>v;



int main()
{
   long long n,val;

   cin>>n;
   while(n--)
   {
       cin>>val;
       v.push_back(val);
   }
   sort(v.begin(),v.end());
   int sg=v.size()-1;

   cin>>n;
   while(n--)
   {
       cin>>val;
       int f =0;
      int mid=sg/2;
      int first=0;
      int last=sg;
      while(first<=last)
      {
          mid = (first+last)/2;
          if(v[mid]<=val)
          {
              first=mid+1;
              f=mid+1;
             // cout<<val<<endl<<f<<endl;
          }
          else
          {
              last=mid-1;
          }
      }
      cout<<f<<endl;
   }

    return 0;
}
