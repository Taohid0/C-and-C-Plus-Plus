#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long test,n;
  cin>>test;
  while(test--)
  {
      cin>>n;
      if(n==0)cout<<1<<endl;
      else if(n%2)cout<<9<<endl;
      else cout<<1<<endl;
  }
    return 0;
}
