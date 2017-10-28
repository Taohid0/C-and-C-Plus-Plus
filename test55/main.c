#include <stdio.h>
#include <stdlib.h>
#define LEN 100

int sum1(int n){
    int sum=0,i;
    for(i=1;i<=n;i++){
    sum+=i;}
    return sum;
    }

int main()
{  int n,result;
    scanf("%d",&n);
    result = sum1(n);
    printf("%d\n",result);
    return 0;
}
