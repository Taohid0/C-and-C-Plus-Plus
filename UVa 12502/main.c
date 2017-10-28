#include <stdio.h>
#include <stdlib.h>

int main()
{
   int money_a,a,b,money,temp,t;

   scanf("%d",&t);
   while(t--){
    scanf("%d%d%d",&a,&b,&money);

    temp = a-((a+b)/3);

    if(a<=temp){
        printf("0\n");
    }
    else
    printf("%d\n",money_a);
   }
    return 0;
}
#include<stdio.h>
int main()
{
int x,y,z,t,i;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&x,&y,&z);
i= z*(x+(x-y))/(x+y);
printf("%d\n",i);
}
return 0;

}
