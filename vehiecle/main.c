#include <stdio.h>
#include <stdlib.h>

int main()
{int hours,speed,i;

    while(1){
    printf("What is the speed of the vehicle in mph?\n");
    scanf("%d",&speed);
    printf("How many hours has it traveled?\n");
    scanf("%d",&hours);

   printf("hour     distance travelled\n");
    for(i=1;i<=hours;i++)
    printf("%d        %d\n",i,i*speed); }

    return 0;
}
