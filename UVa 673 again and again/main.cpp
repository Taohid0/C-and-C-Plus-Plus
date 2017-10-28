#include <bits/stdc++.h>

using namespace std;

int main()
{

   int test,i;
   cin>>test;
   getchar();
   while(test--)
   {
       string s;
       stack<char>st;
     getline(cin,s);
     // cin>>s;
       int l =  (int)s.size();

       for( i = 0;i<l;i++)
       {
           if(!st.empty() && st.top()=='('&&s[i]==')')
           {
               st.pop();
           }

          else if(!st.empty() && st.top()=='['&&s[i]==']')
           {
               st.pop();
           }
           else
            st.push(s[i]);
       }
       if(st.empty())
        cout<<"Yes";

       else
        cout<<"No";
       cout<<endl;
   }
    return 0;
}
