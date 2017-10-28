#include <stdio.h>
#include <stdlib.h>

int main()
{long int first,second,next,i,limit;

     printf("entet the limit\n");
     scanf("%ld%ld%ld",&first,&second,&limit);
     printf("%ld  %ld",first,second);

    for(i=1;i<limit-1;i++){
        next=first+second;
        first = second;
        second = next;

        printf("  %ld",second);

    }




    return 0;
}
