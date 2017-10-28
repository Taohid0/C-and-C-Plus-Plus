#include <stdio.h>
#include <stdlib.h>

int main()
{   float mass1,mass2,distance,force;
    printf("give the mass of the first body\n");
    scanf("%f",&mass1);

    printf("give the mass of the second body\n");
    scanf("%f",&mass2);

    printf("give the distance between the two bodies\n");
    scanf("%f",&distance);

    force=(6.67*.00000001*(mass1*mass2))/(distance*distance);

    printf("the force between the two bodies is %f dyne",force);
    return 0;
}
