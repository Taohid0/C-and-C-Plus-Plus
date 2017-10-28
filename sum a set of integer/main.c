#include <stdio.h>
#include <stdlib.h>

int main()
{int num,sum,i;
float average;

    printf("this program computes the average of a set of numbers\n"
           "Enter values one after another\n"
           "Enter a negative number at the end\n\n");

           for(i=1;i<=1000;i++){
               scanf("%d",&num);
               if (num<0)
                break;
               sum+=num;}

               average=sum/(float)num;
               printf("%f",average);

    return 0;
}
