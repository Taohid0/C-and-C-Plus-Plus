#include <bits/stdc++.h>
#define MAX 50

void part (int arr[],int low,int high);
void merge (int arr[],int low,int mid,int high);

int main()
{  int n,number[MAX],i;

   printf("how many numbers do you want to enter?");
   scanf("%d",&n);

   printf("enter the numbers : ");
   for(i = 0;i<n;i++)
   {
       scanf("%d",&number[i]);
   }
   part(number,0,n-1);

   for(i = 0;i<n;i++)
   {
       printf("%d  ",number[i]);

   }
    return 0;
}

void part (int arr[],int low,int high)
{
    int mid;

    if(low<high)
    {
        mid = (high+low)/2;
        part(arr,low,mid);
        part(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}
  void merge (int arr[],int low,int mid,int high)
{
       int l = low,m = mid,r = mid+1,i= low,temp[MAX],k;

        while (l<=m && r<=high)
        {
            if(arr[l]<arr[r])
            {
                temp[i++] = arr[l];
                l++;
            }
            else
            {
                temp[i++] = arr[r];
                r++;
            }
        }
        if(l>m)
        {
            for(k = r;k<=high;k++)
            {
                temp[i++] = arr[k];
            }
        }
        else
        {
            for(int k = l;k<=mid;k++)
            {
                temp[i++] = arr[k];
            }
        }
        for(int h = low;h<=high;h++)
       {
          arr[h] = temp[h];
        }
}
