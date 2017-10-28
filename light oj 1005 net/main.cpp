#include <bits/stdc++.h>

using namespace std;

long long dp[35][35];

long long  call (long long n , long long r){
 if (r == 1) return n;
 if (n == r) return 1;
 if (dp[n][r]!=-1) return dp[n][r];
 else dp[n][r] = call (n - 1 , r) + call (n - 1 , r - 1);
 return dp[n][r];
}

int main (){
 int T , i;
 scanf ("%d" , &T);
 for (i = 1; i <= T; i++){
  memset (dp , -1 , sizeof (dp));
  sull n , k;
  scanf ("%llu%llu" , &n , &k);
  printf ("Case %d: " , i);
  if (n < k) puts("0");
  else if (k == 0) puts("1");
  else{
   sull sum = 1;
   sull ii;
   for (ii = n - k + 1; ii <= n; ii++)
   sum *= ii;
   //cout << sum << endl;
   printf ("%llu\n" , sum * call (n , k));
  }
 }
 return 0;
}
