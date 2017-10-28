#include <stdio.h>
#include <stdlib.h>

int main()
{int hours,minutes,seconds,totalSeconds;

    printf("give the elapsed time.first enter hours,then minutes and at last seconds\n");
    scanf("%d\n%d\n%d",&hours,&minutes,&seconds);

    totalSeconds=(hours*3600)+(minutes*60)+seconds;

    printf("the elapsed time is %d seconds",totalSeconds);

    return 0;
}
