#include <stdio.h>
#include <stdlib.h>

int main()
{int num;

    do{ printf("guess a number between 0 to 100.\n");
    scanf("%d",&num);

    if(num<55)
        printf("Your guess is lower than the number. Guess again!\n");

    else if (num>55)
        printf("Your guess is higher than the number. Guess again\n");

    else
        printf("congratulation.good guess\n");


    }while(num!=55);
    return 0;
}
