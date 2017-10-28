#include <stdio.h>
#include <stdlib.h>

int main()
{float a=0,b=0,num;
    printf("enter numbers and press 0 to stop\n");
  //  scanf("%f",&num);
   do {scanf("%f",&num);
     if(a<num){
           a=num;}
     if(b>num){
        if(num!=0){
        b=num;}

}

     }while(num!=0);
      printf("the largest number is %.2f and smallest nonnegative number is %.2f",a,b);
    return 0;
}
