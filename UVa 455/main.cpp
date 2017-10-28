#include <bits/stdc++.h>

using namespace std;

int main()
{
  int test,i,j,k,len,slen;
  string s;
   cin>>test;

   for(i = 1;i<=test;i++){

       cin>>s;
       len = (int) s.length();

       for(j = 1;j<=len;j++){

             string concate = "";
             string sb = s.substr(0,j);

             slen = (int)sb.length();

             for(k =1;k<=len/slen;k++){
                concate+=sb;
             }
             if(concate==s){

             break;
             }
       }
       cout<<slen;
       if(test!=i){
            cout<<endl;}
   }
    return 0;
}
