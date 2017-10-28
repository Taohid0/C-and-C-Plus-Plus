#include <stdio.h>
#include <stdlib.h>


void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    }
int main()
{int a,b;

    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("%d    %d",a,b);

    return 0;
}
