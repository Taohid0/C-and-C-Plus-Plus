#include <stdio.h>
#include <string.h>

int main()
{   char tp[10404],url[102];
    int test,i,j,num,relevance;

   scanf("%d",&test);

   for(i=1;i<=test;i++){
        num = -1;
        for(j=1;j<=10;j++){
        scanf("%s%d",url,&relevance);
        if(relevance>num){
            num = relevance;
            strcpy(tp,url);
        }
        else if (relevance == num){
            num = num;
            strcat(tp,"\n");
            strcat(tp,url);
        }
   }
   printf("Case #%d:\n%s\n",i,tp);
   }
    return 0;
}
