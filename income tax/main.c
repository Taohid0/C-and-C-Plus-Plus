#include <stdio.h>
#include <conio.h>

int main()
{float tax1,tax2,tax3,tax4,tax5,tax6,income;

    printf("Enter amount of your taxable income:\n");
    scanf("    %f",&income);

    tax1 = income*.1;
    tax2 = income*.02+7.5;
    tax3 = income*.03+37.5;
    tax4 = income*.04+82.5;
    tax5 = income*.05+142.5;
    tax6 = income*.06+230.0;

    if(income<=750)
        printf("your due tax is $%.2f",tax1);
    else if(income>750 && income <=2250)
        printf("your due tax is $%.2f",tax2);
    else if(income>2250 && income<=3750)
        printf("your due tax is $%.2f",tax3);
    else if(income>3750 && income<=5250)
        printf("your due tax is $%.2f",tax4);
    else if(income>5250 && income<=7000)
        printf("your due tax is $%.2f",tax5);
    else
        printf("your due tax is $%.2f",tax6);

        getch();

    return 0;
}
