#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;

    FILE* even;

    printf("enter a number\n");
    scanf("%d",&num);

    even = fopen ("D:/data/even.txt","w");

    if (num%2==0)
        fprintf(even,"the number is even");

    else
        fprintf(even,"the number is not even");

    return 0;
}
