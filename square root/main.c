#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{int num,count=0,negative=0;
float sqroot;

    printf("enter 12321 to stop\n");

    while(1){
        printf("enter a number\n");
        scanf("%d",&num);

        if (num == 12321)
            break;

        if (num<0){
            printf("number is negative\n");
            negative++;
            continue;
            }
         sqroot=sqrt(num);
         printf("number = %d\n"
                "square = %f",num,sqroot);
                count++;

        }
          printf("number of items done = %d\n"
                 "negative number = %d\n"
                 "\n***END OF PROGRAM***\n",count,negative);


    return 0;
}
