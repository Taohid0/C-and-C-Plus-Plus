#include <stdio.h>
#include <stdlib.h>

int main()
{int year,rain,count=0,i,j,total_rain=0;
 float average;

    printf("Enter the number of years\n");
    scanf("%d",&year);



    for(i=1;i<=year;i++){
        for(j=1;j<=12;j++){
            printf("at month %d how many inches of rain fallen of year %d?\n",j,i);
            scanf("%d",&rain);
            total_rain+=rain;
            count++;
        }
    }   average=(float)total_rain/count;

     printf("number of month     total rain     average rainfall\n");
     printf("     %d                  %d                 %f",count,total_rain,average);
    return 0;
}
