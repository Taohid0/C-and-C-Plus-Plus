#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string s;
  cin>>n;
  getchar();
  int arr[10];
  cin>>s;
  memset(arr,0,sizeof(arr));
  for(int i=0;i<n;i++)
  {
      arr[s[i]-'0']++;
  }

  if((arr[1] && arr[9]) || (arr[3]&&arr[7]) || (arr[1] && arr[0])||(arr[0]&&arr[2])||(arr[0]&&arr[3]))
  {
      cout<<"YES"<<endl;
  }
  else
    cout<<"NO"<<endl;
    return 0;
}
