#include <stdio.h>
#include <conio.h>

int main()
{int num;

    printf("please enter a integer number");
    scanf("%d",&num);

    if ((num%2)!=0 )
            printf("\a\a\ayou have entered an odd number.\n");

    else
        printf("\a you have entered an even number.\n");
    return 0;
}
