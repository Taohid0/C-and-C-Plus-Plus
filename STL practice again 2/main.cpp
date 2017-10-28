#include <bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define  rall(c) c.rbegin(),c.rend()
#define itr(v) for(vector<int>::iterator itr =v.begin();itr!=v.end();itr++)

using namespace std;

int main()
{  vector<int>v;


   v.push_back(20);
   v.push_back(20);
   v.push_back(40);
   v.push_back(40);

   set<int>s(all(v));
   vector<int> v2(all(s));

   itr(v2){
   cout<<*itr<<'\n';
   }
    return 0;
}
