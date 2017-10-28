#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,sum;

    FILE* sum2;
    //printf("enter number\n");
    //scanf("%d",&num);

//    ok = adding(num);
    sum2 = fopen("D:/data/sum2.txt","r");

    fscanf(sum2,"%d%d",&num,&sum);

    printf("%d   %d",num,sum);

    fclose(sum2);

    return 0;

}


