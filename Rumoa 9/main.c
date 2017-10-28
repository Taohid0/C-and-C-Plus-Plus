#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,sum,r;

scanf("%d",&n);
sum=n;
r=(n%3);
n=(3-r)+n;
while(n>=3){
n=n/3;
sum=sum+n;
/*if(n==(3-r)){
break;
}*/
}
return 0;
}
