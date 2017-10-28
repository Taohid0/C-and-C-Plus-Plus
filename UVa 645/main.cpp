#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test;
   string s1,s2;
   char c[100];
   map<char,char>mp;
   cin>>test;
   getchar();
   while(test--)
   {
       cin>>s1>>s2;
       getchar();
       int len = (int)s1.size();
       for(int i = 0;i<len;i++)
       {
           mp[s1[i]]=s2[i];
           //mp[toupper(s1[i])] =toupper([])
       }
       cout<<s2<<endl<<s1;
       while(gets(c))
       {
           for(int i= 0;c[i];i++)
          if(isalpha(mp[c[i]]))cout<<mp[c[i]];
          else cout<<c[i];
       }
     if(test)cout<<endl;
     mp.clear();
   }
    return 0;
}
