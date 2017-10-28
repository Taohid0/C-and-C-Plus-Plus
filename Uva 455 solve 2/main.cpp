#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     int test;
     string s;
     cin>>test;
    for(int cas=1;cas<=test;cas++)
    {

           cin>>s;
           int len=s.length();
           for(int i=1;i<=len;i++)
           {
                 string concat="";
                 string subs=s.substr(0,i);
                 int slen=subs.length();
                 for(int j=1;j<=len/slen;j++)
                 {
                     concat+=subs;
                 }
                 if(concat==s)
                 {
                     cout<<slen<<endl;
                     break;
                 }


           }
           if(cas!=test) cout<<endl;

    }

    return 0;
}
