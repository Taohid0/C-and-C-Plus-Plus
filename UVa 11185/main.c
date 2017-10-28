#include <stdio.h>
#include <stdlib.h>

int main()
{   long long int num,digit[100],i,j;
    while(1){scanf("%lld",&num);
        if(num<0){
            break;
        }

        i=0;
        j=0;
        do{
            digit[i]=num%3;
            num/=3;
            j++;
            i++;
        }while(num!=0);
        for(i=j-1;i>=0;i--){
            printf("%lld",digit[i]);
        }
        printf("\n");
    }
    return 0;
}
