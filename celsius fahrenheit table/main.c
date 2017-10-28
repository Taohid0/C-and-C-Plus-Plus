#include <stdio.h>
#include <stdlib.h>

int main()
{int celsius;

    printf("celsius               fahrenheit\n");
    for(celsius=0;celsius<=20;celsius++)
    printf("%d               %.2f\n",celsius,(9/5)*(float)celsius+32);
    return 0;
}
