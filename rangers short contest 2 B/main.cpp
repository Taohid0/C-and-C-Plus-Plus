#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr1[1000],arr2[1000];

   cin>>n;
   int counter =0;
   for(int i = 0;i<n;i++)cin>>arr1[i]>>arr2[i];

   for(int i = 0;i<n;i++)
   {
       for(int j = 0;j<n;j++)
       {    if(i==j)continue;
           if(arr1[i]==arr2[j])counter++;
       }
   }
   cout<<counter<<endl;
    return 0;
}
