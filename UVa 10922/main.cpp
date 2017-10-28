#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len,temp,sum;
    string s;
    while(cin>>s)
    {


        int degree;
        if(s=="0")break;
        sum = 0;
        len = (int)s.size();
         for(int i =0;i<len;i++)
         {
             sum+=s[i]-'0';

         }
         if(sum%9)
         {
             cout<<s<<" is not a multiple of 9."<<endl;
         }
         else
         {
             degree =1;

             while(sum>9)
             {  temp= 0;
                 while(sum){
                 temp+=sum%10;
                 sum/=10;
                 }
                 sum = temp;
                 if(sum%9==0)degree++;

               } cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;

         }

    }
    return 0;
}
