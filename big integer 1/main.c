#include <stdio.h>
#include <stdlib.h>

int main()
{int a[500],t,temp,x,j,m,k,i,n;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        a[0]=1;
        m=1;
        temp = 0;

        for(i=1;i<=n;i++){

           for(j=0;j<m;j++){

            x = a[j]*i+temp;
            a[j] = x%10;
            temp = x/10;
           }
           while (temp>0){
                    a[m] = temp%10;
                    temp/=10;;
                    m++;
           }
        }
        for(k=m-1;k>=0;k--){
            printf("%d",a[k]);
        }
        printf("\n");

    }
    return 0;
}
