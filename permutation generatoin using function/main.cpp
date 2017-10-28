#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s = "abcd";
  do{

  for(int i = 0;i<4;i++)
   {
       cout<<s[i];
   }
   cout<<endl;
}while(next_permutation(s.begin(),s.end()));

    return 0;
}
