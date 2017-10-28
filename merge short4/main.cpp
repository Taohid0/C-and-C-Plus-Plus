#include <bits/stdc++.h>
#define MAX 100

void part (int arr[],int low,int high);
void mergeShort (int arr[],int low,int mid,int high);

int main()
{   int i,numbers[MAX],n;

    printf("how many numbers do you want to enter?\n");
    scanf("%d",&n);

    printf("enter the numbers :");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    part(numbers,0,n-1);

    printf("the numbers after shorting are : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d\n",numbers[i]);
    }
    return 0;
}
void part (int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        part(arr,low,mid);
        part(arr,mid+1,high);
        mergeShort(arr,low,mid,high);
    }
}
void mergeShort (int arr[],int low,int mid,int high)
{
    int temp[MAX],i,l,r,k;
    i = low;
    l = low;
    r= mid+1;

    while(l<=mid && r<=high)
    {
        if(arr[l]<=arr[r])
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
                temp[i] = arr[r];
                r++;
        }
        i++;
    }
    if(l>mid)
    {
        for(k = r;k<=high;k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for(k = l;k<=mid;k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    for(k = low;k<=high;k++)
    {
        arr[k] = temp[k];
    }
}
