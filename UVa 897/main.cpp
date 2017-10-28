#include <bits/stdc++.h>

using namespace std;

bool isDivisible(int n){
int arr[10];
arr[0]=1;
arr[2] =1;
arr[4] = 1;
arr[5] =1;
arr[6] = 1;
arr[8] = 1;

  int t;
  while(n)
  {
      t = n%10;
      n/=10;
      if(arr[t])return false;
  }
  return true;
}

int main()
{

    return 0;
}
