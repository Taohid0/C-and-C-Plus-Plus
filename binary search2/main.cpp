#include <bits/stdc++.h>

int main()
{   int first,last,middle,number,srch,arr[100];

    printf("how many number do you want to enter?\n");
    scanf("%d",&number);

    printf("enter the numbers :");

    for(int i=  0;i<number;i++){
        scanf("%d",&arr[i]);
    }

    printf("which number do you want to search?\n");
    scanf("%d",&srch);

    first = 0;
    last = number-01;
    middle =(first+last)/2;

    while(first<=last){
        if(arr[middle]==srch){
            printf("the number is present at location %d",middle+1);
            break;
        }

        else if(arr[middle]<srch){
            first =middle+1;
        }
        else
            last = middle-1;

        middle = (first+last)/2;
    }
    if(first>last){
        printf("%d is not present here",srch);
    }
    return 0;
}
