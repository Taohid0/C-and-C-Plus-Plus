#include <stdio.h>
#include <stdlib.h>

int main()
{   int number[10],t,t2,m,k,i,test,j,l,w;

   scanf("%d",&test);
   for(w=1;w<=test;w++){

        t=-1;
        k=0;
        m=9;
        t2=-1;

        for(j=0;j<10;j++){
    scanf("%d",&number[j]);
   }

   for(i=0;i<10;i++){
    if(number[i]>t){
        k++;
        t= number[i];
    }
   }
   for(l=9;l>=0;l--){
    if(number[i]>t2){
        m--;
        t2 = number[i];
    }
   }
     if(w==1){
        printf("Lumberjacks:\n");
     }
   if(m==l){
    printf("Ordered\n");
   }
   else if(k==i){
    printf("Orderdd\n");
   }
   else
    printf("Unordered\n");}
    printf("%d",m);
    return 0;
}
