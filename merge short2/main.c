#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void merge (int arr[],int low,int mid,int high);
void part (int arr[],int low,int high);

int main()
{   int numbers [MAX],c,n;
    printf("how may numbers do you want to enter?\n");
    scanf("%d",&n);

    printf("enter the numbers : ");
    for(c = 0;c<n;c++){
        scanf("%d",&numbers[c]);
    }
    part (numbers,0,n-1);

    printf("numbers after shorting : ");

    for(c = 0; c<n;c++){
        printf("%d\t",numbers[c]);
    }
    return 0;
}
void part (int arr[],int low,int high){
              int mid;
              if(low<high){
              mid = (high+low)/2;
              part(arr,low,mid);
              part(arr,mid+1,high);
              merge(arr,low,mid,high);
}}
void merge(int arr[],int low,int mid,int high)
{

    int l,r,i,temp[MAX],k;

    i = low;
    l = low;
    r = mid+1;

    while(l<=mid && r<=high)
    {

        if(arr[l]<=arr[r])
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
           temp [i] = arr[r];
            r++;
        }
        i++;
    }
    if(l>mid)
    {
        for(k = r;k<=high;k++){
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for(k = l;l<=mid;k++){
            temp[i] = arr[k];
            i++;
        }
    }
    for(k = low;k<=high;k++){
        arr[k] = temp[k];
    }
}
