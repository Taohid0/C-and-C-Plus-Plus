#include <bits/stdc++.h>

using namespace std;

int main()
{
   int m,n;
   vector<int>v1,v2;
   int value;
   cin>>m;
   for(int i=0;i<m;i++)
   {
       cin>>value;
       v1.push_back(value);
   }
   cin>>n;
   for(int j=0;j<n;j++)
   {
       cin>>value;
       v2.push_back(value);
   }
   sort(v1.begin(),v1.end());
   sort(v2.begin(),v2.end());
   int ans=0;

   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
          // cout<<v1[i]<<" "<<v2[j]<< " "<<abs(v1[i]-v2[j])<<endl;
           if(abs(v1[i]-v2[j])<=1)
           {
                ans++;
                v1[i]=-100;
                v2[j]=-50;

               break;
           }
       }
   }
   cout<<ans<<endl;
    return 0;
}
