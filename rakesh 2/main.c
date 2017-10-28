#include <stdio.h>
#include <conio.h>
int main ()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    if(x<y){
        if(x<z){
            printf("Smallest=%.2f",x);
        }
        else{
            printf("Smallest=%.2f",z);
        }
    }
    else{
        if(y<z){
            printf("Smallest=%.2f",y);
        }
        else{
            printf("Smallest=%.2f",z);
        } getch ();
    }
    return 0;}

