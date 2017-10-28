#include <stdio.h>
#include <stdlib.h>

int main()
{
int h,m,x,n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&h,&m);
if(h==12){
if(m==00){
printf("%.2d:%.2d\n",h,m);
}
else{
m=(60-m);
printf("%d:%d\n",h,m);
}
}
else{
x=(12*60)-((h*60)+m);
h=x/60;
m=x%60;
printf("%.2d: %.2d\n",h,m);
}
}
return 0;
}
