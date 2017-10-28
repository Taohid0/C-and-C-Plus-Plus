#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int a=0,b=0,len;
   cin>>s;
   len=(int)s.size();
   bool flag=false;
   for(int i=0;i<len;i++)
   {
       if(s[i]=='A')a++;
       else if(a>0)a--;
       else if(a==0 && s[i]=='B'){
        a=1;
        break;
       }
   }

   if(a==0)cout<<"Sim"<<endl;
   else cout<<"Nao"<<endl;
    return 0;
}
