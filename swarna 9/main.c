#include <stdio.h>
#include <math.h>

int main()
{   float amount,paisa,taka;

    printf("enter the amount\n");
    scanf("%f",&amount);

    taka = (int)amount;
    paisa = ceil((amount-taka));

    printf("%.0f taka and %f paisa",taka,paisa);

    return 0;
}
