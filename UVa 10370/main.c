#include<stdio.h>
int main()
{
int a[1020],i,c,d,e,m;
float w,k,n,j;
while( scanf("%d",&c)==1)
{
for(d=1;d<=c; d++)
{
w=0;
e=0;
k=0;
scanf("%f",&j);
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
k=k+a[i];
}
w=k/j;
for(m=0;m<j;m++)
{
if(a[m]>w)e=e+1;
}
n=(100*e)/j;
printf("%.3f%%\n",n);
}
}
return 0;
}
