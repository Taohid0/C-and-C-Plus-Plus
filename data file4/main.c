#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;

    file1 = fopen("d:/data/file1.txt","r");

    if(file1 == NULL )
        printf("error : file does not exist");
    else
        printf("file successfully opened");

     fclose(file1);

    return 0;
}
