#include <stdio.h>
#include <stdlib.h>

int main()
{int i,num,sum=0;

    printf("how many number do u want to calculate?\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
            sum+=i;}
        printf("%d",sum);

    return 0;
}
