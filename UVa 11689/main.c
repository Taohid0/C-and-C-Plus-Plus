#include <stdio.h>
#include <stdlib.h>

int main()
{   int test,b,rb,b1,b2,i,sum;


        scanf("%d%d%d",&b1,&b2,&rb);
        b = b1+ b2;
        sum = 0;
        while(b>rb){
            sum+=(b/rb);

            b = (b/rb)+(b%rb);
            if(b == rb){
                sum +=1;}
            }
        printf("%d\n",sum);

    }
    return 0;
}
