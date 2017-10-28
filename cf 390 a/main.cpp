#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   vector<int>v;
   cin>>n;
   int inpt;
   int j;
   for(int i=0;i<n;i++)
   {
       cin>>inpt;
       v.push_back(inpt);
   }
   vector<pair<int,int> >v2;
   int i;
   bool test = false;
   for(i=0;i<n;i++)
   {
       if(v[i]!=0)v2.push_back(make_pair(i+1,i+1));
       else
       {
           for(j=i+1;j<n;j++)
           {
               if(v[j]!=0)
               {
                   v2.push_back(make_pair(i+1,j+1));
                   i=j;
                   break;
               }

           }
           if(n==j)test =true;
       }
       if(test)break;
   }
   if(test){cout<<"NO"<<endl;return 0;}
   else cout<<"YES"<<endl;
   cout<<(int)v2.size()<<endl;
   for(int i=0;i<(int)v2.size();i++)
   {
       cout<<v2[i].first<<" "<<v2[i].second<<endl;
   }
    return 0;
}
