#include <stdio.h>
#include <conio.h>

int main()
{int speed;

    printf("enter speed\n");
    scanf("%d",&speed);

    if(speed>=24 && speed<=56)
        printf("speed is normal");
    else
        printf("speed is abnormal");

     getch();

    return 0;
}
