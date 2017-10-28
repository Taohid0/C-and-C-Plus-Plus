#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{   char code[10001];
    long int i,j,l,t,rt,k;

   scanf("%ld",&t);
   for(i=1;i<=t;i++){
    scanf("\n");
    gets(code);
    l = strlen(code);
    rt = sqrt(l);
    if(rt*rt!=l){
        printf("INVALID");
    }
    else{
        for(k=0;k<rt;k++){
            for(j=k;j<l;j+=rt){
                printf("%c",code[j]);
            }
        }
    }
    printf("\n");
   }
    return 0;
}
