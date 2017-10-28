#include <stdio.h>
#include <string.h>

int main()
{char str1[100],str2[100];

    printf("enter a sentence\n");
    gets(str1);

    printf("enter anoter sentence\n");
    gets(str2);

    if (strcmp(str1,str2)==0)
        puts(str1);
    else
        puts(str2);

    return 0;
}
