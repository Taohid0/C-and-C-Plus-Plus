#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int len=0;


    printf("enter a message\n");

    while(getchar()!='\n')
        len++;
    printf("your message was %d characters long",len);

    getch();

    return 0;
}
