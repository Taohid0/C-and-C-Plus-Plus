#include <stdio.h>
#include <stdlib.h>

int main()
{int i,num[101]={0};

  for(i=1;i<=100;i++){
    if (i<=50)
         num[i]=0;
    else
        num[i]=1;

    printf(" %d",num[i]);
  }
    return 0;
}
