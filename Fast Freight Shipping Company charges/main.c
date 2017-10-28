#include <stdio.h>
#include <conio.h>

int main()
{float amount;

    printf("enter amount of your package in pound unite\n");
    scanf("%f",&amount);

    if(amount==0 && amount >=2)
        printf("your shipping charge is $%.2f",amount*1.1);
    else if(amount>2 && amount<=6)
        printf("your shipping charge is $%.2f",amount*2.2);
    else if(amount>6 && amount<=10)
        printf("your shipping charge is $%.2f",amount*3.7);
    else
        printf("your shipping charge is $%.2f",amount*3.8);

    getch();

    return 0;
}
