#include <bits/stdc++.h>

using namespace std;

int main()
{  int edge,assign = 0;
    string s1,s2;

   map<string,int>m;
   cout<<"enter the number of edges : ";
   cin>>edge;

   while(edge--)
   {
       cin>>s1>>s2;

       if(m.find(s1)==m.end())
       {
           m[s1]= assign;
           cout<<"mapping "<<s1 <<" with "<<assign++<<endl;
       }

        if(m.find(s2)==m.end())
       {
           m[s2]= assign;
           cout<<"mapping "<<s2<<" with "<<assign++<<endl;
       }
       int u = m[s1];
       int v= m[s2];
       cout<<"edge : " <<u<<" "<<v<<endl;
   }
    return 0;
}
