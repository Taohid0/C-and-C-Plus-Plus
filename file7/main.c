#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE* test2;

    char name[20];
    int roll;

    printf("enter name and roll\n");

    gets(name);
    scanf("%d",&roll);

    test2 = fopen("D:/data/test2.txt","w");
    fprintf(test2,"%s       %d",name,roll);

    fclose(test2);

    return 0;
}
