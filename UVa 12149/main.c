#include <stdio.h>
#include <stdlib.h>

int main()
{   long int num,i,result;

    while(1){
        scanf("%ld",&num);
            if(num== 0){
                break;
            }
            result = 0;
            for(i=1;i<=num;i++){
                result += i*i;
            }
            printf("%ld\n",result);
    }
    return 0;
}
