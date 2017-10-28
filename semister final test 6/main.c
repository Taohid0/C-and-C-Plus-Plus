#include <stdio.h>
#include <stdlib.h>

int power (int x,int n){
    int result;
        if(n==0){
            return 1;
        }
        else
            result = x*power(x,n-1);
        return result;}

int main()
{   int n1,n2;

    printf("enter a number\n");
    scanf("%d%d",&n1,&n2);
    printf("%d",power(n1,n2));

    return 0;
}
