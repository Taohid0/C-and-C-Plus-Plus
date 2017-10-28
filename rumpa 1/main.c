#include <stdio.h>

int main (){

long long int n,sum,x,y,sum1,i,j,a[10000];
while(1){
scanf("%lld",&n);
if(n==0)
break;
sum=0;
sum1=0;
j=0;
while(n!=0){
x=n%2;
a[j]=x;
sum+=x;
n/=2;
j++;
}
for(i=j;i>=0;i--){
y=pow(10,i);
sum1+=(y+a[j-i]);
}
printf("The parity of %lld is %lld (mod 2).\n",sum1,sum);
}
return 0;
}
