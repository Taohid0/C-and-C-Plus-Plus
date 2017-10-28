#include <stdio.h>
#include <stdlib.h>

int main()
{
int w,i,a[100],k,l,j,z,t;
scanf("%d",&t);
for(j=0;j<t;j++){
scanf("%d",&w);
for(i=0;i<w;i++){
scanf("%d",&a[i]);
}
k=0;
l=0;
z=0;
for(i=1;i<w;i++){

if(a[i-1]>a[i])
k++;
else if(a[i-1]==a[i])
z++;
else if(a[i-1]<a[i])
l++;
}

printf("Case %d:%2d%2d\n",j+1,l,k);
}
return 0;
}
