#include <stdio.h>
#include <stdlib.h>

int main()
{long sum = 0,i;

 for (i = 2;i<=10;i++){
            while(i){
                if(i%2==1){
                    sum++;
                }
                i=i/2;
            }
        }
        printf("%ld\n",sum);

    return 0;

}
