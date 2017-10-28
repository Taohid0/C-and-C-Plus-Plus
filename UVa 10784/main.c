#include <stdio.h>
#include <math.h>

int main()
{   long int n,result,i =0;
    while(1){i++;

        scanf("%ld",&n);
        if(n==0){
            break;
        }
        result = ceil((3+sqrt(9+8*n))/2);
        printf("Case %ld: %ld\n",i,result);
    }
    return 0;
}
