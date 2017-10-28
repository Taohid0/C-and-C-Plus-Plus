#include <stdio.h>
#include <stdlib.h>

int main()
{   int t,a,f,i,j;

    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&f);

        while(f--){for(i=1;i<=a;i++){
            for(j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        for(i=a-1;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%d",i);
            } printf("\n");
        } printf("\n\n");}
    }

    return 0;
}
