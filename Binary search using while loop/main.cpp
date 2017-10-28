#include <bits/stdc++.h>

using namespace std;

int main()
{   int high,low,mid,arr[100],srch,num;

    low = 0;
    high  = 6;

    printf("how many numbers do you wnat to enter?\n");
    scanf("%d",&num);

    printf("enter the numbers : ");

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("which number do you want to find?\n");
    scanf("%d",&+srch);

    while(low<=high){
            mid = (low+high)/2;
        if (srch>arr[mid]){
            low = mid+1;
        }
        else if (srch<arr[mid]){
            high = mid-1;
        }
        else
        {
            printf("%d is present here",srch);
            break;
        }
    }
    if(high<low){
        printf("%d is not present here",srch);
    }
    return 0;
}
