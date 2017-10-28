#include <stdio.h>
#include <stdlib.h>

int main()
{int hours,payRate,grossPay;
    printf("enter the number of hours the employees worked\n");
    scanf("%d",&hours);
    printf("enter the employee's hourly pay rate");
    scanf("%d",&payRate);
    grossPay=hours*payRate;
    printf("the employee's gross pay is tk %d",grossPay);
    return 0;
}
