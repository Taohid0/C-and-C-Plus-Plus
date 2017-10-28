#include<stdio.h>
#include<math.h>
int main()
{
long double max,result,a,b,c,area;
while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
{
max=0;
if(max<a) max=a;
if(max<b) max=b;
if(max<c) max=c;
if(a==0||b==0||c==0) printf("-1.000\n");
else if(a+b+c-max<=max) printf("-1.000\n");
else
{
result=(2*(a*a*b*b+b*b*c*c+c*c*a*a))-((pow(a,4)+pow(b,4)+pow(c,4)));
area=((sqrt(result))/3);
printf("%.3Lf\n",area);
}
}
return 0;
}
