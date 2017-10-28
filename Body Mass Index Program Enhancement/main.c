#include <stdio.h>
#include <conio.h>

int main()
{int height,weight;
 float BMI;

    printf("enter your weight (in pound) and height (in inch)\n");
    scanf("%d%d",&weight,&height);

    BMI = weight*(703/(height*height));

    if (BMI>=18.5 && BMI<=25)
        printf("you have optimal weight");
    else if (BMI<18.5)
        printf("your have under weight");
    else
        printf("you have over weight");

    getch();

    return 0;
}
