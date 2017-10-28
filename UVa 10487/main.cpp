#include <bits/stdc++.h>

using namespace std;
 int sum[1000010];
int main()
{   ios::sync_with_stdio(false);

   int arr[1010];
   int n,q;

   int i=1;
   bool flag = false;
   for(;;)
   {
       cin>>n;
       if(!n)break;

       int indx = 0;
       for(int j = 0;j<n;j++)
       {
           cin>>arr[j];
       }
       for(int j = 0;j<n;j++)
       {
           for(int k = j+1;k<n;k++)
           {
               sum[indx++] = arr[j]+arr[k];
           }
       }
       sort(sum,sum+indx);
       cin>>q;
       int value; int difference;
       cout<<"Case "<<i++<<":"<<endl;
       int r;
       for(int j = 0;j<q;j++)
       {
          difference = 99999;
           cin>>value;
           for(int k = 0;k<indx;k++)
           {
               if(abs(sum[k]-value<difference)){difference = abs(sum[k]-value);r =sum[k];}
           }
           cout<<"Closest sum to "<<value<<" is "<<r<<"."<<endl;

       }
   }
    return 0;
}
