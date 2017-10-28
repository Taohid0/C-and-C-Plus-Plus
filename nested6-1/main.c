#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k;

    for(j=65;j<=68;j++){

    for(i=65;i<=j;i++){
          //  for(l=10;l>=0;l-=2){
              //  printf(" ");}

    printf("%c",i);
    for(k=i;k>=65;k--){
        printf("%c",k);}

    }

    printf("\n");}

    return 0;
}
