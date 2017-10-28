#include <bits/stdc++.h>

using namespace std;

int main()
{
   map<string,int>m;
   map<string,int> :: iterator it;

   string name;

   while(cin>>name)
   {
       if(name == "end")break;
     //  m[name]++;
   }
   for(it = m.begin();it!=m.end();it++)
   {
       cout << (*it).first <<" is " << (*it).second << endl;
   }

    return 0;
}
