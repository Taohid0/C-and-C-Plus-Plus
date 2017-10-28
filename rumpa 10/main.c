#include <stdio.h>
#include <stdlib.h>

int main()
{
long int c,d,a[10],b[10],x,i,sum,t,n,m;
while(1){
scanf("%ld%ld",&c,&d);
if(c==0&&d==0){
break;
}
t=0;
sum=0;
n=0;
m=0;
for(i=0;c!=0;i++){
a[i]=c%10;
c=c/10;
n++;
}
for(i=0;d!=0;i++){
b[i]=d%10;
d=d/10;
m++;
}
/* if(n>=10||m>=10){
break;}*/
if(m>n){
for(i=0;i<m;i++){
x=t+(a[i]+b[i]);
t=x/10;
sum+=t;
}
}

else{
for(i=0;i<n;i++){
x=t+(a[i]+b[i]);
t=x/10;
sum+=t;
}
}
if(sum==0){
printf("No carry operation\n");
}
else
printf("%ld carry operation\n",sum);
}
return 0;
}
