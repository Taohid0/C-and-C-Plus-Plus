#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,num;

    printf("enter a number\n");
    scanf("%d",&num);

    printf("the odd numbers bitween 1 and %d are :",num);

    for(i = 1;i<=num;i++)
    {

        if(i%2==0)
        {
           printf("%d  ",i);
        }
    }
    return 0;
}
