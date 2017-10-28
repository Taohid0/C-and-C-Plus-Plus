#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,arr[110],value;
   memset(arr,0,sizeof(arr));
   int mx =-1;
   cin>>n;
   for(int i = 0;i<n;i++)
   {
       cin>>value;
       arr[value]++;
       mx = max(mx,arr[value]);
   }
   int r = 0;
   int timeMx = 0;
   for(int i=0;i<100;i++)
   {
       if(arr[i]!=mx)r+=arr[i],arr[i] =0;
       else if(arr[i]==mx)timeMx++;
   }
   if(timeMx>1)
   r+=(timeMx-1)*mx;
   cout<<r<<endl;
    return 0;
}
