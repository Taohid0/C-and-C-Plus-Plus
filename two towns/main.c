#include <stdio.h>
#include <stdlib.h>

int main()
{int populationA,populationB,i;
float growthA,growthB;

    printf("enter the population of town A and it's growth rate/n");
    scanf("%d%f",&populationA,&growthA);
    printf("enter the population of town B and it's growth rate/n");
    scanf("%d%f",&populationB,&growthB);


    for(i=1;i<=100;i++){
        if((populationA+(populationA*growthA*i))>=(populationB+(populationB*growthB*i))){
        printf("after %d years the population of town A will be greater than or equal of town B",i);
        break;}}
    return 0;
}
