//prints a table squares  using a whie statement

#include <stdio.h>
#include <conio.h>

int main()
{   int i,n;

    printf("this program prints a table of squares.\n"
           "enter number of entries in table\n");

           scanf("%d",&n);

           i=1;
           while (i<=n){
            printf("%10d%10d\n",i,i*i);
            i++;
           }
           getche();

    return 0;
}
