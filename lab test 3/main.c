#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char str[100];

    fp = fopen("D:/data/lab test 2.txt","r");

    if(fp==NULL){
        printf("source file cannot open");
        exit(EXIT_FAILURE);
    }
    while(fgets(str,99,fp)){
        puts(str);
    }
    fclose(fp);
    return 0;
}
