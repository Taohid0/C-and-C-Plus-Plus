#include <stdio.h>

int main()
{
long int i,n1,n2,t;
scanf("%ld",&t);



for(i=1;i<=t;i++)
{
scanf("%ld %ld",&n1,&n2);
if(n1<n2)
printf("<\n");

else if(n1>n2)
printf(">\n");

else
printf("=\n");

}

return 0;
}
