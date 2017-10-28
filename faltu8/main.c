#include <stdio.h>
#include <conio.h>

int main()
{int ch;
    printf("press any key wihout N or n for a noisy sound\n");
    ch=getche();
    while(ch!='n' && ch!='N'){
        printf("\a");
        printf("\b");
        ch =getche();
    }
    printf("\nthank u");
    return 0;
}
