#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[100];
    cin>>n;
    for(int i = 0;i<7;i++)
        cin>>arr[i];
   for(int i = 0;;i++)
   {
       i%=7;
       n-=arr[i];
       if(n<=0)
       {
           cout<<i+1<<endl;
           break;
       }

   }
    return 0;
}
