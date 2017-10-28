#include <bits/stdc++.h>

int main()
{   int num,srch,first,last,middle,arr[100];

    printf("how many numbers do you want to enter\n");
    scanf("%d",&num);

    printf("enter integers : ");

    for(int i = 0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    printf("which number do you want to find?\n");
    scanf("%d",&srch);

    first = 0;
    last = num-1;
    middle = (first+last)/2;

    while(first<=last){
        if(arr[middle]==srch){
            printf("%d found at location %d",srch,middle+1);
            break;
        }
        else if(arr[middle]<srch){
            first = middle+1;
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
