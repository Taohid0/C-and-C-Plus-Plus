#include <stdio.h>
#include <stdlib.h>

int main()
{   int unit;
    float result;

    printf("enter number of unit consumed by the user\n");
    scanf("%d",&unit);
    result = 0;

    if (unit >0 && unit <=50){
        result+=unit*.2;
        unit = 0;
    }
    else
    {
        unit -=50;
        result+=.2*50;
    }

    if (unit >0 && unit <=50){
        result+=unit*.4;
    }
    else if(unit>0)
    {
        unit -=50;
        result +=.4*50;
    }printf("unit %d",unit);

    if (unit >0 && unit <=100){
        result+=unit*.6;
    }
    else if (unit>0)
    {
        unit -=100;
        result +=.6*50;
    }

    if(unit>0){
        result = unit*.9;
    }
    printf("total bill is taka %.2f\n",result);
    return 0;
}
