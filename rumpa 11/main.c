#include <stdio.h>
#include <stdlib.h>

int main()
{
long long int n,r,sum1,s,x,i,t;
scanf("%lld",&t);
for(i=1;i<=t;i++){
scanf("%lld",&n);
if(n==1){
printf("Case #%lld: %lld is a Happy number.\n",i,n);
continue;
}
s=n;
sum1=0;
while(sum1!=1){
sum1=0;
while(s!=0){
r=(s%10);
sum1+=(r*r);
s/=10;
}
x=0;
if(sum1==n){
x=1;
break;}
else{
s=sum1;

}
}
if(x==1){
printf("Case #%lld: %lld is a Unhappy number.\n",i,n);
}
if(x==0)
printf("Case #%lld: %lld is a Happy number.\n",i,n);
}
return 0;
}
