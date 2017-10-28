#include <bits/stdc++.h>
#define MAX 50

void part(int arr[],int low,int hight);
void merge (int arr[],int low,int mid,int high);

int main()
{   int lp,n,numbers[MAX];

    printf("how many numbers do you want to short?\n");
    scanf("%d",&n);

    printf("enter the numbers : ");
    for(lp = 0; lp< n ;lp++)
    {
        scanf("%d",&numbers[lp]);
    }

    part (numbers,0,n-1);

    for(lp= 0;lp<n;lp++)
    {
        printf("%d   ",numbers[lp]);
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
            merge(arr,low,mid,high);
        }
    }
    void merge (int arr[],int low,int mid,int high)
    {
        int m,i = low,l = low,r = mid+1,temp[MAX];

        while(l<=mid && r<=high)
        {
            if(arr[l]<=arr[r]){
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
        for(m = r;m<=high;m++){
            temp[i] = arr[m];
            i++;
        }
        else
        {
            for(m = l;m<=mid;m++)
            {
                temp[i] = arr[m];
                i++;
            }
        }
        for(m=low;m<=high;m++){
         arr[m]=temp[m];
    }
    }
