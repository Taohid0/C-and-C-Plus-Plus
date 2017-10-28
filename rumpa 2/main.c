#include <stdio.h>
#include <stdlib.h>

int main()
{
long long int i,a,b,n;
printf("Input :\n");
scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%lld%lld",&a,&b);
if(a>b)
printf(">");
else if(a<b)
printf("<");
else if (a==b)
printf("=");
printf("\n");
}
return 0;
}
