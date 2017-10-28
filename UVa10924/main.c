#include <stdio.h>
#include <stdlib.h>

int main()
{long int i,n1,n2;

  while(1){
    scanf("%ld%ld",&n1,&n2);
    i = 0;

    if(n1 == 0 && n2 == 0){
        break;
    }
    while(n1!=0 && n2!=0){
    if ( n1%=10 +n2%=10){
        i++;
    }


    n2/=10;
    n1/=10;
  }
  printf("%d\n",i);
  }
    return 0;
}
