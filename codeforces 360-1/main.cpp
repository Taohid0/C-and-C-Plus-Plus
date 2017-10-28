#include <bits/stdc++.h>

using namespace std;

int main()
{
  int oppo,days;
  int r = 0;
  int temp;
  cin>>oppo>>days;
  getchar();
  string s;temp = 0;
  while(days--)
  {  bool test = false;

      cin>>s;
     // int len = (int)s.length();
      for(int i=0;i<oppo;i++)
      {
          if(s[i]=='0')
          {
              test = true;
              break;
          }
      }
     // cout<<test<<endl;
      if(test)temp++;
      else
      {
          if(temp>r){
            r = temp;
          }
          temp=  0;
      }
  }
  if(r<temp)r = temp;
  cout<<r<<endl;
    return 0;
}
