#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,toEnter,toReplace;
  int p;

   getline(cin,s);
   cin>>toReplace>>toEnter;

   int sLen = (int)s.size();
   int toEnterLen = (int) toEnter.size();
   int toReplaceLen = (int) toReplace.size();
    bool test  = false;

  int difference = abs(toEnterLen-toReplaceLen);


   for(int i = 0;i<sLen;i++)
   {
       int j = 0;

       while(toEnter[j]==s[i+j])
       {
           j++;

           if(j==toEnterLen)
           {
               test = true;
               p = i;
               break;
           }
       }
       if(test)break;

   }

   if(toEnterLen<=toReplaceLen)
   {
       for(int index = p+toReplaceLen;index<=sLen;index++)
       {
           s[index-difference] = s[index];
       }
   }
   else
    for(int index = sLen;index>=p+toReplaceLen;index--)
   {
       s[index+difference]  = s[index];
   }

   for(int index = 0;index<toEnterLen;index++)
   {
       s[index+p] = toEnter[index];
   }

   cout<<s;

    return 0;
}
