#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{float i,j,k;

    printf("inter three digit\n");
    scanf("%f%f%f",&i,&j,&k);

    if(i>j){
        if(i>k){
            printf("%.2f is the greatest number\n",i);}
        else
            {printf("%.2f is the greatest number\n",k);}}

    else{
        if(j>k){
            printf("%.2f is the greatest number\n",j);}
        else{
            printf("%.2f is the greatest number\n",k);}
     }
     getch();

    return 0;
}
