#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,day;
    float temp[30],avg,max,min,total;

    printf("how many days of the month?\n");
    scanf("%d",&day);

    for(i=0;i<day;i++){
    printf("enter temperature for day %d : \n",i+1);

    scanf("%f",&temp[i]);


    }

    for(i=0;i<day;i++){
        total+=temp[i];
    }
    avg=total/day;

    printf("average temperature is %.2f\n",avg);

    min = 200;
    max = -100;

    for(i=0;i<day;i++){
    if(temp[i]>max){
        max=temp[i];
    }
    if(temp[i]<min){
        min = temp[i];
    }
    }
    printf("maximum temperature is %.2f\nminumum temperature is %.2f",max,min);

    return 0;
}
