#include <bits/stdc++.h>

int main()
{   int i,first,last,middle,srch,number,arr[100];

    printf("how many numbers dou you want to enter?\n");
    scanf("%d",&number);

    printf("enter the numbers : ");

    for(i = 0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    printf("which number do you want to find?");
    scanf("%d",&srch);

    last = 0;
    first = number - 1;
    middle = (first+last)/2;

    while(first>=last){
        if(arr[middle]==srch){
            printf("%d is found at location %d",srch,middle+1);
            break;
        }
        else if(arr[middle]>srch){
            first = middle+1;
        }
        else
            last = middle-1;

        middle = (first+last)/2;
    }
    if(first<last){
        printf("%d is not present here",srch);
    }
    return 0;
}
