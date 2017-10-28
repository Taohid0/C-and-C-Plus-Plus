#include <stdio.h>
#include <conio.h>

int main()
{float package;

    printf("how many package you have purchased?\n");
    scanf("%f",&package);

    if(package>=10 && package<=19)
        printf("your amount of discount is $%.2f and total amount of the purchase after discount is $%.2f",(package*99*.2),
                                                                                    (package*99*.2)+(package*99));
    else if (package>=20 && package<=49)
        printf("your amount of discount is $%.2f and total amount of the purchase after discount is $%.2f",package*99*.3,
                                                                                (package*99*.3)+(package*99));
    else if (package>=50 && package<=99)
        printf("your amount of discount is $%.2f and total amount of the purchase after discount is $%.2f",package*99*.4,
                                                                                            (package*99*.4)+(package*99));
    else if (package>=100)
        printf("your amount of discount is $%.2f and total amount of the purchase after discount is $%.2f",(package*99*.5),
                                                                            (package*99*.5)+(package*99));
    else
        printf("you have no discount");

    getch();

    return 0;
}
