#include <stdio.h>
#include <stdlib.h>

int main()
{float a,b=0,num;

    printf("enter numbers\n");
    scanf("%f",&a);

    do{
        scanf("%f",&num);
        if(num!=-99){
        if(a<num)
          a=num;

        if(b>num)
          b=num;}

    }while(num!=-99);

    printf("the largest number is %f and smallest number is %f",a,b);
        return 0;
}
