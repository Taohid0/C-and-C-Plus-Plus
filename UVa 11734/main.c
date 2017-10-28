#include <stdio.h>
#include <string.h>

int main()
{   char team[25],judge[25];
    int i,a,b,l1,k,l2,t,j;

   scanf("%d",&t);

   for(j=1;j<=t;j++){
        scanf("\n");
    gets(team);
    gets(judge);

   l1  = strlen(team);
   l2 = strlen(judge);
   a = 0;
   b = 0;

   for(i=0;i<l1;i++){
    if(team[i]!= ' '){
        a+=team[i];
    }}
    for(k=0;k<l2;k++){
    if(judge[k]!= ' '){
        b+=judge[k];
    }}

   if(a!=b){
    printf("Case %d: Wrong Answer.\n",j);
   }
   else if(l1==l2 && a==b){
     printf("Case %d: Yes\n",j);
     }
    else
        printf("Case %d: Output Format Error\n",j);
   }
    return 0;
}
