#include <stdio.h>
#include <stdlib.h>

void square(void);
    int i,num;

  //  printf("numbers         square");

    for (num=1; num <= 10; num++){
        printf("%d%12d\n",i,i*i);
    }
void cube (int n){
    int i;
    //printf("numbers         cube\n");

    for(i=1;i<=n;i++){
            printf("%d%12d",i*i*i);
    }


int main()
{  // int k;

    //printf("give the numbers\n");
   // scanf("%d",&k);

    square();
    cube();

    return 0;
}
