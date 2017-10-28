#include <stdio.h>
#include <conio.h>

int main()
{float weight,mass;

    printf("enter mass of the object\n");
    scanf("%f",&mass);

    weight = mass*9.8;

    if(weight<10)
        printf("weight of the object is %.2f Newtons and it is too light",weight);
    else if(weight>1000)
        printf("weight of the object is %.2f Newtons and it is too heavy",weight);
    else
        printf("weight of the object is %.2f Newtons and it is normal",weight);

       getch();

    return 0;
}
