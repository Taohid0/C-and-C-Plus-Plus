#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1,num2;
while(scanf("%d %d",&num1,&num2)!=EOF)
{
if(num1>num2)
printf("%d\n",num1-num2);
else
printf("%d\n",num2-num1);
}
return 0;
}
