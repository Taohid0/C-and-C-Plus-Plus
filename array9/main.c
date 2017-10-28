#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[100],i,j;

    printf("enter few numbers : ");

    for(i=0;i<100;i++){
    scanf("%d",&a[i]);
    j=i;
    if (a[i]==-99)
        break;
    }
    printf("numbers in reverse order : ");
    for(i=j-1;i>=0;i--){
    printf("  %d",a[i]);
    }
    return 0;
}
