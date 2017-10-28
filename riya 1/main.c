#include <stdio.h>

int main()
{
long long int num1, num2, num, cycle, maxCycle, i;

while(scanf("%ld%ld",&num1,&num2)==2){

maxCycle= 0;

for(i=num1;i<=num2;i++)
{
num=i;
cycle=1;
do
{
if(num%2==0)
{
num=num/2;
}
else num=3*num+1;
cycle++;
}
while(num!=1);
if(cycle>maxCycle)
{
maxCycle=cycle;
}
}


printf("%ld %ld %ld\n", num1, num2, maxCycle);
}

return 0;
}
