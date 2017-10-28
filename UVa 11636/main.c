#include <stdio.h>
#include <stdlib.h>

int main()
{  int i,j,k = 0,n;

   while(1){
    scanf("%d",&n);
    k++;
    j = 0;
    i = 1;

    if(n<0){
        break;
    }
        while(i<n){
            i = i * 2;
            j++;
        }
        printf("Case %d: %d\n",k,j);
   }
    return 0;
}
