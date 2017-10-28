#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char num[20000],num1[10700],num2[10700];
int num3[1070];
int main()
{
int i,w,c,k,d,j,n;
d=0;

scanf("%s",num1);
scanf("%s",num2);
j=strlen(num1)-1;
k=strlen(num2)-1;
while(1)
{
if(d)
scanf("%s",num2);
w=atoi(num2);
if(!w)
break;
j=strlen(num1)-1;
k=strlen(num2)-1;

c=0;n=0;
while(j>=0 || k>=0 || c==1)
{ if(j>=0 && k>=0)
num3[n]=((num1[j]-48)+(num2[k]-48)+c)%10;
else if(j>=0)
num3[n]=((num1[j]-48)+c)%10;
else if(k>=0)
num3[n]=((num2[k]-48)+c)%10;
else
num3[n]=c%10;

if(j>=0 && k>=0)
c=((num1[j]-48)+(num2[k]-48)+c)/10;
else if(j>=0)
c=((num1[j]-48)+c)/10;
else if(k>=0)
c=((num2[k]-48)+c)/10;
else
c=c/10;
n++;
j--;k--;
}
k=0;
for(i=(n-1);i>=0;i--,k++)
num1[k]=num3[i]+48;
num1[k]='\0';
d++;
}
printf("%s\n",num1);

return 0;
}
