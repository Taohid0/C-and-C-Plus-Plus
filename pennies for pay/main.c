#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{  int day,i,salaryFirst;
   float addSalary=0,salary=1;

    printf("what salary of each day and how many days?\n");
    scanf("%f%d",&salary,&day);

    salaryFirst=salary;

    for(i=1;i<day;i++){

        salary=salary*2;
        addSalary+=salary;
    }
    printf("the salary is $%.2f",(addSalary+salaryFirst)/100);
    return 0;

    getch();
}
