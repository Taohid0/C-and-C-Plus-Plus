#include <stdio.h>
int main()
{
int n,N,M,x,y,i;
while(scanf("%d",&n)==1)
{ if(n==0)
break;
scanf("%d %d",&N,&M);
for(i=1;i<=n;i++)
{
scanf("%d %d",&x,&y);
if(x==N || y==M)
printf("divisa\n");
else if(x<N && y>M)
printf("NO\n");
else if(x>N && y>M)
printf("NE\n");
else if(x<N && y<M)
printf("SO\n");
else
printf("SE\n");
}
}
return 0;
}
