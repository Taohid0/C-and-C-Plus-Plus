#include <stdio.h>
#include <math.h>

int main()
{ int a[200],n,n1,n2;

    while(scanf("%lld%lld",&n1,&n2)==2){
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
