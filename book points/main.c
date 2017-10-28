#include <stdio.h>
#include <conio.h>

int main()
{int book;

    printf("How many books you have purchased in this month\n");
    scanf("%d",&book);

    if(book==0)
        printf("you have earner 0 points");
    else if(book==1)
        printf("you have earned 5 points");
    else if(book==2)
        printf("you have earned 15 points");
    else if(book==3)
        printf("you have earned 30 points");
    if(book>=4)
        printf("you have earned 60 points");

    getch();

    return 0;
}
