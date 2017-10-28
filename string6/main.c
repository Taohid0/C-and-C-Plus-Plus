#include <stdio.h>
#include <string.h>

int main()
{   char msg1[50],msg2[50];

    printf("enter two messages\n");
    gets(msg1);
    gets(msg2);

    //strcmp(msg1,msg2);

    printf("%d",strcmp(msg1,msg2));

    return 0;
}
