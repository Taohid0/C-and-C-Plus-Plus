#include <stdio.h>
#include <stdlib.h>

int main()
{    int max,t,min,i,j,result,street,r;

   scanf("%d",&t);
   for(j=1;j<=t;j++){

    max = -1;
    min = 30005;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        scanf("%d",&street);
        if(street>=max){
            max =street;
        }
        if(street<=min){
            min = street;
        }}
        result = max;
        if(max!=min){
        result = max - min;}
        printf("%d\n",result);
    }

    return 0;
}
