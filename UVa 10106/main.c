#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,m,x,j,temp,result[200],i;

   while(scanf("%d%d",&a,&b)==2){

             result[0]=1;
                temp = 0;
                m = 1;
        {

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
