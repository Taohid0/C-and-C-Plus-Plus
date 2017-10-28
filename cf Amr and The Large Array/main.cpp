#include <bits/stdc++.h>
using namespace std;

int m[1000005], L[1000005];
#define INF 9999999
int main()
{
  int n, x, maxi = 0, mini = INF, ch = -1;
  scanf("%d", &n);
  for(int i=0;i<n;i++)
  {
    scanf("%d", &x);
    if(m[x] == 0)
    {
      L[x] = i;
      m[x] = 1;
    }
    else m[x]++;
    if(m[x] > maxi)
    {
      maxi = m[x];
      mini = i - L[x] + 1;
      ch = L[x] + 1;
    }
    else if(m[x] == maxi && i - L[x] + 1 < mini)
    {
      mini = i - L[x] + 1;
      ch = L[x] + 1;
    }
  }
  cout << ch << " " << ch + mini - 1;
  return 0;
}
