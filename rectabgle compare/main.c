#include <stdio.h>
#include <conio.h>

int main()
{int length1,width1,length2,width2,area1,area2;

    printf("give the length and width of the first rectangle\n");
    scanf("%d%d",&length1,&width1);
    printf("give the length and width of the second rectangle\n");
    scanf("%d%d",&length2,&width2);

    area1 = length1*width1;
    area2 = length2*width2;

    if (area1>area2)
        printf("rectangle 1 has the greater area");


    else if (area2>area1)
            printf("rectangle 2 has the greater area");

    else
        printf("both rectangles have same area");


       getch();

    return 0;
}
