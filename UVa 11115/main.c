#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,m,x,j,temp,result[200],i;

   while(1){
        scanf("%d%d",&a,&b);

        if(a== 0 && b== 0){
            break;
        }result[0]=1;
                temp = 0;
                m = 1;
        for(i=1;i<=b;i++){

       for(j=0;j<m;j++){

                x =result[j]*a+temp;
                result[j]=x%10;
                temp=x/10;
            }
            while(temp>0){
                result[m] = temp%10;
                temp/=10;
                m++;
            }
        }
        for(i=m-1;i>=0;i--){
            printf("%d",result[i]);
        }
        printf("\n");
   }


    return 0;
}
