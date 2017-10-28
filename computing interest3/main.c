#include <stdio.h>
#include <stdlib.h>

#define SIZE ((int)sizeof(value)/sizeof(value[0]))

int main()
{ int i,j,years,balance,interest;
 double value[10];

    printf("Enter interest rate : ");
    scanf("%d",&interest);
    printf("Enter number of years : ");
    scanf("%d",&years);
    printf("Enter balance : ");
    scanf("%d",&balance);

    printf(" year");
    for(i=0;i<SIZE;i++){
        printf("%6d%%",interest+i);
        value[i]=balance;
    }
    printf("\n");

    for(j=1;j<=years;j++){
        printf("%6d",j);

        for(i=0;i<SIZE;i++){
            value[i]=((value[i]+i)/100)+value[i];
            printf("%7.2lf",value[i]);
        }
        printf("\n");
    }
    return 0;
}
