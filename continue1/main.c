#include <stdio.h>
#include <stdlib.h>

int main()
{int score,count=0,total=0;

    while(1){
    printf("enter your score\n");
    scanf("%d",&score);
    if(score<0 || score>100)
        continue;
    total+=score;
    printf("your total score is %d\n",total);
    }
    return 0;
}
