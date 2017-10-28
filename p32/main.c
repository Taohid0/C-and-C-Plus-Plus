#include <stdio.h>
#include <stdlib.h>

int main()
{int n1,n2,sum;
char test;

   do{ printf("enter two numbers to add\n");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("the sum is %d.do u want to continue?",sum);}

      while(test=='y'|| test=='Y');{
         //printf("enter two numbers to add\n");
         //printf("\n");
     scanf("%c",&test);

    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("the sum is %d",sum);
    }printf("thank you");


    return 0;
}
