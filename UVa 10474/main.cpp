#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<int>v;
   int n,q,value,c =1;
   vector<int>::iterator it;

   while(1)
   {
       cin>>n>>q;
       if(!n && !q)break;
       v.clear();
       for(int I = 1;I<=n;I++)
       {
           cin>>value;
           v.push_back(value);
       }
       sort(v.begin(),v.end());
       cout<<"CASE# "<<c++<<":"<<endl;
       for(int I=  0;I<q;I++)
       {
           cin>>value;
           it =  std::find(v.begin(),v.end(),value);
          // cout<<"it "<<*it;
           int pos = it-v.begin();

           if(it==v.end())
           {
               cout<<value<<" not found"<<endl;
           }
           else{
            cout<<value<<" found at "<<pos+1<<endl;

           }
       }

   }

    return 0;
}
