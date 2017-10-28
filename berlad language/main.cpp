#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
   char *s1,*s2,*t;

   scanf("%s%s",s1,s2);

    t = strrev(s1);
   if(s1.equals(s2)==0)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}
