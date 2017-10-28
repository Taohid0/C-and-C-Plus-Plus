#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;

    //printf("n");
    for(i=1;i<=100;i++){
        if((1000000+(1000000*.08f*i)-(100000*i)<=0)){
            printf("after %d year his account will be empty",i);
            break;
        }
    }
    return 0;
}
