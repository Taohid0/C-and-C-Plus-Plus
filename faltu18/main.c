#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;

   for(;;){
    printf("enter a number (0 to stop)\n");
    scanf("%d",&n);
    if(n==0)
        break;
    printf("%d cubed is %d",n,n*n*n);}
    printf("the end of the program");

    return 0;
}
