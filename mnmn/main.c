#include <stdio.h>
#include <stdlib.h>

int main()
{   char ch;
    int len=0;
    printf("enter a message\n");

    ch=getchar();

    while(ch!='\n'){
    len++;

    ch=getchar();

}   printf("%d",len);
    return 0;
}
