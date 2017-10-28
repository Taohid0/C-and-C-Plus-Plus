#include <stdio.h>
#include <stdlib.h>

int main()
{float initial_value1,final_value,initial_value2;
int i,num;

    printf("number : \n");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        initial_value1=1/(float)(2*i-1);
        initial_value2=1/(float)(2*i+1);

        final_value=4*(float)(initial_value1-initial_value2);
    }printf("the value of pi is %f",final_value);
    return 0;
}
