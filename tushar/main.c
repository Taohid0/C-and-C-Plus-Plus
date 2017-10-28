#include <stdio.h>
#include <stdlib.h>
#define RATE 12

int main()
{   int employee,work_time[50],i;

    printf("Enter the number of employees : ");
    scanf("%d",&employee);

    printf("\nEnter work time one by one : ");

    for(i=1;i<=employee;i++){
        scanf("%d",&work_time[i]);
    }
    for(i=1;i<=employee;i++){
            printf("\n%d Taka",RATE*(work_time[i]-40));

    }
    return 0;
}
