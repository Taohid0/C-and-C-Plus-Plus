#include <stdio.h>
#include <stdlib.h>

int main()
{long int i,test,farmer,a,c,b,sum;

    scanf("%ld",&test);
    while(test--){
            sum = 0;
        scanf("%ld",&farmer);
        for(i=1;i<=farmer;i++){

        scanf("%ld%ld%ld",&a,&b,&c);
        sum+=a*c;
    }
    printf("%ld\n",sum);
    }
    return 0;
}
