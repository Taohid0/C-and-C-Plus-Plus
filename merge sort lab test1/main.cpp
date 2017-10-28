#include <bits/stdc++.h>

using namespace std;
int temp[100];

void mergeSort(int a[],int low,int mid,int high){

     int index = low;
     int i = low;
     int r = mid+1;

     while(i<=mid && r<=high)
     {
         if(a[i]<=a[r])
         {
             temp[index] = a[i];
             i++;
         }
         else
         {
             temp[index] = a[r];
             r++;
         }
         index++;
     }
     if(i>mid)
     {
         for(int k = r;k<=high;k++)
         {
             temp[index++]=a[k];
         }
     }
     else
     for(int k = i;k<=mid;k++)
     {
         temp[index++] = a[k];
     }

     for(int p = low;p<=high;p++)
     {
         a[p]= temp[p];
     }

}

void part(int a[],int low,int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        part(a,low,mid);
        part(a,mid+1,high);
        mergeSort(a,low,mid,high);
    }
}
int main()
{
   int n,a[100];
   cin>>n;

   for(int i = 0;i<n;i++)
   {
       cin>>a[i];
   }
   part(a,0,n-1);

   for(int i = 0;i<n;i++)
   {
       cout<<temp[i]<<" ";
   }
    return 0;
}
