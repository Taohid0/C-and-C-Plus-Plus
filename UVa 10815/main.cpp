#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
   string s;
   set<string>st;
   while(cin>>s)
   {
       //getchar();
       int i = 0;

       while(i<(int)s.size())
       {
           string temp = "";
           while(isalpha(s[i]))
           {
               temp+=tolower(s[i]);
               i++;
           }
         // cout<<temp;
          if((int)temp.size())
           st.insert(temp);
           i++;
       }

   }

       for(set<string>::iterator j = st.begin();j!=st.end();j++)
        cout<<*j<<endl;



    return 0;
}
