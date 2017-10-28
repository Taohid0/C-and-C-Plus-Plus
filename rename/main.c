#include <stdio.h>
#include <stdlib.h>

int main()
{FILE *fp;

    fp = fopen("d:/data/even.txt","r");

   fclose(fp);

   rename("even.txt","even000.txt");
    return 0;
}
