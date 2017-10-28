#include <stdio.h>
#include <conio.h>

int main()
{int i=0,n;

    printf("this program prints a table of integers\n"
           "Enter numbers of entries in the table\n");
           scanf("%d",&n);

           while(i<=n){
            printf("%10d%10d\n",i,i*i);
            i++;
            }
            getch();


    return 0;
}
