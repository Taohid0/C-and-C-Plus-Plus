#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{int i,sum,lower_limit,upper_limit,k;

    while(lower_limit<upper_limit){

    printf("enter lower limit and upper limit\n");
    scanf("%d%d",&lower_limit,&upper_limit);

    sum=0,

    k=upper_limit*upper_limit;

    for(i=lower_limit;i<=k;i++){
        if((i*i)<=k)
            sum+=(i*i);
        }  printf("%d\n",sum);}

    return 0;
}
