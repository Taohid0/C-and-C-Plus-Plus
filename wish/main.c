#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;

    printf("press 1 2 or 3\n");
    scanf("%d",&num);

    switch (num){
            case 1 : printf("good morning");
                     break;

            case 2 : printf("good afternoon");
                     break;

            case 3 : printf("good night");
                     break;

            default: printf("there is no wish for u");
            }

    return 0;
}
