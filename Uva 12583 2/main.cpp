#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int nCase,tCase;
scanf("%d",&nCase);
for(tCase=1;tCase<=nCase;tCase++)
{
int i,j,count=0,n,k,track=0;
char c[505],ch;
scanf("%d%d%c",&n,&k,&ch);
scanf("%s",c);
for(i=1;i<n;i++)
{
track=0;
for(j=i-k;j<i;j++ )
{

if(c[i]==c[j])
{count++;

break;
}
}

}
printf("Case %d: %d",tCase,count);
if(tCase<nCase)cout<<endl;
}
return 0;
}

