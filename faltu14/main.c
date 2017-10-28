#include <stdio.h>
#include <conio.h>

int main()
{int n,digit=0;

    printf("enter a nonnegative integer\n");
    scanf("%d",&n);

    do{
        n/=10;
        digit++;
    }while(n>0);
    printf("the number has %d digits",digit);
    getch();


    return 0;
}
