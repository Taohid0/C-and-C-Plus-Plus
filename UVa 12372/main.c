#include <stdio.h>
#include <stdlib.h>

int main()
{   long int test,a,b,c,i;

    scanf("%ld",&test);

    for(i=1;i<=test;i++){

        scanf("%ld%ld%ld",&a,&b,&c);

        if(a<=20 && b<= 20 && c<=20){
            printf("Case %ld: good\n",i);
        }
        else
            printf("Case %ld: bad\n",i);
    }
    return 0;
}
