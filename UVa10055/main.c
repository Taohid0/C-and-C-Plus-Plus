#include <stdio.h>
#include <stdlib.h>

int main()
{   long int a,b,result;

    while(scanf("%ld%ld",&a,&b)!= EOF){

            if(b>a){
                result  = b-a;}
            else
                result = a-b;


        printf("%ld\n",result);
    }

    return 0;
}
