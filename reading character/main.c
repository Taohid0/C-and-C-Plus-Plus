#include <stdio.h>
#include <stdlib.h>

int main()
{   char ch;
    int length=0;

    printf("write a message\n");
    ch = getchar();

    while(ch!='\n'){
        length++;
        ch = getchar();

    }

    printf("your message has %d characters\n",length);

    return 0;
}
