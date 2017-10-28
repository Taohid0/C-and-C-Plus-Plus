#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char str[100];

    fp = fopen("D:/data/faltu file.txt","r");

    while(fgets(str,99,fp)){
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}
