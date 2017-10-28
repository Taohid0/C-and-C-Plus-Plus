#include <stdio.h>
#include <string.h>

int main()
{char a[100],len;

    printf("enter a sentence\n");
    gets(a);


    len=strlen(a);

    printf("%d",len);
    return 0;
}
