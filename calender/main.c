#include <stdio.h>
#include <stdlib.h>

int main()
{int number,day,i;

    printf("enter the number of days in the month and the day of the week on which the month begins\n");
    scanf("%d%d",&number,&day);
    printf("sat  sun  mon  tue  wed  thu  fri\n");

    for(i = 1;i<=number;i++){
            if (i%8==0){
                printf("\n");
            }
        printf("%d    ",i);
    }
    return 0;
}
