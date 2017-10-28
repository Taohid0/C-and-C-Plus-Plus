#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE* test;

    test = fopen("D:/data/test.txt","w");

    fprintf(test,"my first file test");

    fclose(test);

    test = fopen("D:/data/test.txt","r");
    fscanf("")

    return 0;
}
