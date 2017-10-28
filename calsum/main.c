#include <stdio.h>
#include <stdlib.h>

float calsum (float a,float b,float c){
        float d;
        d = a+b+c;
        return d;
        }

int main()
{   float x,y,z,sum = 0;

    printf("enter three numbers : \n");
    scanf("%f%f%f",&x,&y,&z);

    sum = calsum (x,y,z);

    printf("%.2f",sum);

    return 0;
}
