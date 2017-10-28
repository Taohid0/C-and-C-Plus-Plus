#include <stdio.h>
#include <stdlib.h>

int power (int x,int n){
            int result = 1;
            while (n-->0){
                result = result *x;}

            return result;
            }

int main()
{   int result,base,pow;

    printf("enter base and power\n");
    scanf("%d%d",&base,&pow);

    result = power(base,pow);

    printf("\n%d",result);

    return 0;
}
