#include <stdio.h>
#include <string.h>

int main()
{   char msg[100];
    int i,len;

    printf("Enter a message : \n");
    gets(msg);

    len = strlen(msg);
    for(i=len-1;i>=0;i--){
        printf("%c",msg[i]);
    }
    return 0;
}
