#include <stdio.h>
#include <stdlib.h>

int main()
{   long int n1,n2,result;
    char sign;

    while(scanf("%ld%c%ld",&n1,&sign,&n2)!=EOF){
        if(sign == '%'){
            result = n1 % n2;
        }
        if(sign == '/'){
            result = n1/n2;
        }
        printf("%ld\n",result);

    }
    return 0;
}
