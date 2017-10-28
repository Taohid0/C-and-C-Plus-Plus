#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,min,a1,a2,a3,a4,sum,x,bt,n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a,&b,&c);
bt=(a+b+c);
if(a>b){
if(a>c){
if(b>c){
min=c;
}
else
{
min=b;
}
}
else{
min=b;
}
}
else{
if(b>c){
if(a>c){
min=c;
}
else{
min=a;
}
}
else{
min=a;}
}
x=(bt-min)/2;
sum=a1+a2+a3+a4+x;
if(sum>=90){
printf("Case %d: A\n",i+1);}
else if(sum>=80&&sum<90){
printf("Case %d: B\n",i+1);}
else if(sum>=70&&sum<60){
printf("Case %d: C\n",i+1);}
else if(sum>=60&&sum<70){
printf("Case %d: D\n",i+1);}
else if(sum<60){
printf("Case %d: F\n",i+1);
}
}
return 0;
}
