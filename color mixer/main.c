#include <stdio.h>
#include <stdlib.h>

int main()
{ char color1[100],color2[100];

    printf("which two colors do you want to mix?\n");
    scanf("%s %s",color1,color2);

    if (color1 == 'red' && color2 == 'blue')
        printf("you will get purple\n");
    else if (color1 =='red' && color2 =='yellow')
        printf("you will get orange\n");
    else if (color1 == 'blue' && color2 == 'yellow')
        printf("you will get green");
    else
        printf("wrong mixture.please choose among red,bule and yellow");

    return 0;
}
