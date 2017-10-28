#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[10000];
    int i,n,x,j,m,temp;

    while(scanf("%d",&n)==1){

        a[0]= 1;
        m=1;
        temp = 0;
        for(i=1;i<=n;i++){

            for(j=0;j<m;j++){

                x =a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0){
                a[m] = temp%10;
                temp/=10;
                m++;
            }
        }
        printf("%d!\n",n);
        for(i=m-1;i>=0;i--){
            printf("%d",a[i]);
        }
        printf("\n");
    }

    return 0;
}
