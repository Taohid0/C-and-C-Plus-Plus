#include <stdio.h>
#include <stdlib.h>

#define NUM_RATE ((int) (sizeof(value)/sizeof(value[0])))
#define INITIAL_RATE 100

int main()
{   int low_rate,i,j,year;
    float value[5];
    printf("Enter interest rate : ");
    scanf("%d",&low_rate);

    printf("\nEnter number of year : ");
    scanf("%d",&year);

    printf("\nyears");
    for(i=0;i<NUM_RATE;i++){
        printf("%6d",low_rate+i);
        value[i]=INITIAL_RATE;
        }
        printf("\n");

        for(j=1;j<=year;j++){
            printf("%3d",j);
                    for(i=0;i<NUM_RATE;i++){
                    value[i]+=((low_rate+i)/100.0)*value[i];
                    printf("%7.2f",value[i]);

                  }
                  printf("\n");
        }
    return 0;
}
