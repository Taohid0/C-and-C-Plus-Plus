#include <stdio.h>
#include <stdlib.h>

 void print_count(int n)    {

   printf("%d    ",n);

}
int main()
{int i;

  for(i=1;i<=10;i++){
    print_count(i);
  }

    return 0;
}
