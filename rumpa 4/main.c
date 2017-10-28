#include <stdio.h>
#include <stdlib.h>




int main()
{
long int n,i,sum,r,x,t,num,rem,z,j,k;
scanf("%ld",&n);
printf("\n");
for(j=0;j<n;j++){
scanf("%ld",&num);
k=0;
z=num;
while(z!=0){
rem=z%10;
z/=10;
k++;
}
for(i=num-(k*9);i<=num;i++){
t=i;
sum=0;
while(t!=0){
r=t%10;
sum+=r;
t/=10;
}
x=sum+i;
if(num==x)
printf("%ld\n",i);
}
}

return 0;
}
