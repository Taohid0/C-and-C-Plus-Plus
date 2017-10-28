#include <stdio.h>
#include <stdlib.h>

int main()
{   int calls;
    float result;

    printf("enter number of calls\n");
    scanf("%d",&calls);

    if (calls>150){
        result = (calls-150)*.60+250;
    }
    else
        result = 250;

    printf("total bill is taka %.2f",result);
    return 0;
}
