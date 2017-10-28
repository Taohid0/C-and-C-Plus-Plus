#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,result="";
   int len;
   cin>>s;
   s+="WUB";
   //cout<<s<<endl;
   len= (int)s.size();
   for(int i= 0;i<len;i++)
   {

       if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
       {
           i+=2;
           if((int)result.size()){
                cout<<result<<" ";
                result = "";
           }
           continue;

       }

        result+=s[i];//cout<<i <<" "<<s[i]<<" "<<result<<'r'<<endl;

   }
    return 0;
}
