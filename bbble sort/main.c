#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,num[15],temp,i,l,j,k;

    printf("how many numbers do you want to enter : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(j=1;j<n;j++){
        for(k=0;k<n-1;k++){
            if(num[k]>num[k+1]){
                temp = num[k];
                num[k]=num[k+1];
                num[k+1] = temp;
            }
        }

    }
    for(l=0;l<n;l++){
        printf("%d ",num[l]);
    }
    return 0;
}
