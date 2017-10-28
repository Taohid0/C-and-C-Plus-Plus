#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int n;
   cin>>n;
   for(int j=1;j<=n;j++)
   {
       bool flag =true;
       cin>>s;
       for(int i=0;i<(int)s.size();i++)
       {
           if(s[i]!=s[(int)s.size()-1-i])
              {
                  flag = false;
                  break;
              }

       }
 if(flag)
              {
                  cout<<"Case "<<j<<": "<<"Yes"<<endl;
              }
              else
                cout<<"Case "<<j<<": "<<"No"<<endl;
   }
    return 0;
}
