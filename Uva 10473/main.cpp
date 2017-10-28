#include <bits/stdc++.h>

using namespace std;

int main()
{
   char s[100];
   long long n;
   ios::sync_with_stdio(false);
   while(gets(s))
   {
       if(s[1]=='x')
       {
           n = strtoll(s,NULL,16);
           cout<<dec<<n<<endl;
       }
       else
       {
           n = atol(s);
           if(n<0)break;
           else
            cout<<"0x"<<hex<<uppercase<<n<<endl;
       }
   }
    return 0;
}
