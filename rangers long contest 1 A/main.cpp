#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,a=0,g=0,c=0,t=0,qstn=0;
   string s;
   cin>>n;
   cin>>s;
   int len = (int)s.size();
   for(int i= 0;i<len;i++)
   {
       if(s[i]=='A')a++;
       else if(s[i]=='G')g++;
       else if(s[i]=='C')c++;
       else if (s[i]=='T')t++;
       else qstn++;
   }
   int mx = max(a,g);
   mx=max(mx,c);
   mx = max(mx,t);
   int temp=qstn;
   temp-=(mx-a);
   temp-=(mx-g);
   temp-=(mx-c);
   temp-=(mx-t);
   int prntTest = n/4;
   int ca=0,cg=0,cc=0,ct=0;
   ca=n/4-a;
   cg = n/4-g;
   cc=n/4-c;
   ct= n/4-t;
   //cout<<ca<<" "<<cg<<" "<<ct<< " "<<cc<<endl;

   if(temp<0)
   {
       cout<<"==="<<endl;
       return 0;
   }
   else if(temp%4!=0)
   {
       cout<<"==="<<endl;
       return 0;
   }
   else
   {
       for(int i = 0;i<len;i++){
    if(s[i]!='?')cout<<s[i];
    else
    {
        if(ca>0)
        {
            cout<<'A';
            ca--;
        }
        else if(cg>0)
        {
            cout<<'G';
            cg--;
        }
        else if(cc>0)
        {
            cout<<'C';
            cc--;
        }
        else
            cout<<'T';
    }
   }}
    return 0;
}
