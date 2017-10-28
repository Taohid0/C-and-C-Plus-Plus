#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int arr[500] = {0};
   cin>>s;
   int n = (int)s.length();
   int r =0;
   for(int i = 0;i<n;i++)
   {
       if(arr[s[i]-'a']==0)
       {
           r++;
           arr[s[i]-'a'] = 1;
       }
   }
   cout<<r<<endl;
    return 0;
}
