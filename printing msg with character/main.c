#include <stdio.h>
#include <conio.h>

int main()
{   char mess[50];
    int i;
    printf("Enter a message\n");

    for(i=0;i<30;i++){
        mess[i] = getchar();
        if(mess[i]=='\n')
            break;
    }
    for(i=0;mess[i]!='\n';i++){
        printf("%c",mess[i]);
    }
    return 0;
}
