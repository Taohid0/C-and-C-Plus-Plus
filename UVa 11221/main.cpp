#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    int len = (int)s.length();
    int last_index = len-1;

    for(int i = 0;i<len;i++)
    {
        if(s[i]!=s[last_index--])
            return false;
    }
    return true;
}


int main()
{
   string s,temp;
   int test;
   cin>>test;
   getchar();
   for(int t = 1;t<=test;t++){

        getline(cin,s);

       temp = "";
       int len = (int)s.length();


       for(int i = 0;i<len;i++)
       {
           if((s[i]<='z' && s[i]>='a') || (s[i]<='Z'&& s[i]>='A' ))
           {
               temp+=s[i];
           }
       }
       len = (int)temp.length();
     if(isPalindrome(temp))
     {
         cout<<"Case #"<<t<<":"<<endl<<sqrt(len);

     }
     else
        cout<<"Case #"<<t<<":"<<endl<<"No magic :(";

       if(t<test)
       cout<<endl;
   }
    return 0;
}
