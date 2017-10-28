#include <bits/stdc++.h>

using namespace std;

int main()
{
   char s[10][10];
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           cin>>s[i][j];
       }
   }
   bool test = false;

   for(int i=0;i<4;i++)
   {
       for(int j=1;j<3;j++)
       {
           if(s[i][j]=='x')
           {
               if((s[i][j-1]=='x' && s[i][j+1]=='.')||(s[i][j-1]=='.'&&s[i][j+1]=='x'))
               {
                   test =true;
                   break;
               }
           }
          else if(s[i][j]=='.')
          {
              if(s[i][j-1]=='x'&&s[i][j+1]=='x')
              {
                  test =true;
              }
          }
       }
       if(test)break;
   }
   if(test)
   {
       cout<<"YES"<<endl;return 0;
   }
    for(int i=1;i<3;i++)
   {
       for(int j=0;j<4;j++)
       {
           if(s[j][i]=='x')
           {
               if((s[j][i-1]=='x' && s[j][i+1]=='.')||(s[j][i-1]=='.'&&s[j][i+1]=='x'))
               {
                   test =true;
                   break;
               }
                else if(s[j][i]=='.')
            {
              if(s[j][i-1]=='x'&&s[j][i+1]=='x')
              {
                  test =true;
              }
          }
           }
       }
        if(test)break;
   }
      if(test)
   {
       cout<<"YES"<<endl;return 0;
   }
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       if(s[i][j]=='.')s[i][j]='x';
   }
   vector<pair(int,int)> >v;
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           if()
       }
   }

    return 0;
}
