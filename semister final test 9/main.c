#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   FILE *fp;
    char str[50];

    fp = fopen("D:/data/semister final test 9.txt","w");

    while(strlen(gets(str))>0){
        fputs(str,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    return 0;
}
