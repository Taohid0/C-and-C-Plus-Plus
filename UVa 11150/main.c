#include <stdio.h>
#include <stdlib.h>

int cola (int n){

       result1 = n%3;
        if((result1%3+1)==3){
            result1 = result1+1;
        }
        result = num+result1;
}

int main()
{   int num,result1,result;

    while(scanf("%d",&num)!=EOF){
        result1 = num%3;
        if((result1%3+1)==3){
            result1 = result1+1;
        }
        result = num+result1;

        printf("%d\n",result);
    }

    return 0;
}
