#include <stdio.h>
#include <math.h>

int main()
{   float a,b,c,x1,x2;
    char ch;

    do{ printf("enter the value of a,b and c of a quardratric equation : \n");

        scanf("%f%f%f",&a,&b,&c);

        x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b-sqrt(b*b-4*a*c))/(2*a);


    if(b*b-4*a*c==0){
            printf("the root of the equation is %.2f",x1);
            }


    if (b*b-4*a*c>0){
            printf("the root of the equation is %.2f and %.2f",x1,x2);
            }

     if(b*b-4*a*c<0){
                printf("\nthe root is complex");

     }
     printf("\n\n\nif you want to solve another one,please press Y\nAnd to exit press N : ");
     fflush(stdin);

     scanf("%c",&ch);}while(ch == 'y' || ch == 'Y');

    return 0;
}
