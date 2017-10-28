#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int grade[5],i,sum=0;
 float average;

    for(i=0;i<5;i++){
       printf("enter grade[%d]\n",i+1);
       scanf("%d",&grade[i]);
       sum+=grade[i];}

    average = (float) sum/5;
    printf("\n\n\naverage is %f",average);

    getch();


    return 0;
}
