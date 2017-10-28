#include <stdio.h>
#include <math.h>

int main()
{
int n,sum,x,i;
while(1){
scanf("%d",&n);
if(n==0)
break;
sum=0;
for(i=1;i<=n;i++){
x=pow(i,2);
sum+=x;
printf("sum=%d\n",sum);
}
printf("%d\n",sum);
}
return 0;
}
