#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,toEnter,toReplace;
  int i;

   getline(cin,s);
   cin>>toReplace>>toEnter;

   int sLen = (int)s.size();
   int toEnterLen = (int) toEnter.size();
   int toReplaceLen = (int) toReplace.size();
    bool test  = false;

    int difference = abs(toEnterLen-toReplaceLen);

   for(i = 0;i<sLen;i++)
   {
       int j = 0;

       while(j<toEnterLen && toEnter[j]==s[i+j])
       {
           j++;

           if(j==toEnterLen)
           {
               test = true;
               cout<<i<<endl;
               break;
           }
       }
       if(test)break;

   }

   if(toEnterLen<=toReplaceLen)
   {
       for(int index = i+toReplaceLen;index<=sLen;index++)
       {
           s[index-difference] = s[index];
       }
   }
   else
    for(int index = sLen;index>=i+toReplaceLen;index--)
   {
       s[index+difference]  = s[index];
   }
   for(int index = 0;index<toEnterLen;index++)
   {
       s[index+i] = toEnter[index];
   }

   cout<<s;

    return 0;
}
