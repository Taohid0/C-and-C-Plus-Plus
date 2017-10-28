#include <stdio.h>
#include <math.h>

int main()
{   int n,i,j,k;

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        k = 0;
        for(i=1;i<=sqrt(n);i++){
            for(j=i;j>=1;j--){
                if(((i*i*i)-(j*j*j))== n){
                   k++;
                   break;}
            }if(k==1)
            break;
        }
        if (k==1){
            printf("%d %d\n",i,j);
        }
        else
            printf("No solution\n");
    }

    return 0;
}
