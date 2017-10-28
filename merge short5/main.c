#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void part(int arr[],int low,int high);
void merge (int arr[],int low,int mid,int high);


int main()
{   int i,n,number[MAX];

    printf("how many numbers do you want to enter?\n");
    scanf("%d",&n);

    printf("please enter your numbers  : ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    part(number,0,n-1);

    for(i = 0;i<n;i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}
void part(int arr[],int low,int high)
{
    int mid;

    if(low<high)
    {
        mid = (low+high)/2;
        part(arr,low,mid);
        part(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}
void merge (int arr[],int low,int mid,int high)
{
    int l = low,h = high,m = mid,r = mid+1,i =low,temp[MAX],j;

    while (l<=m && r<=h)
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
    if(l>mid)
    {
        for(j = r;j<=high;j++)
        {
            temp[i++] = arr[j];
        }
    }
    else
    {
        for(j  = l;j<=mid;j++)
        {
            temp[i++] = arr[j];
        }
    }
    for(i = low;i<=high;i++)
    {
        arr[i] = temp[i];
    }

}
