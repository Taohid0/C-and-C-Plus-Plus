//balance a cheakbook
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int debit,credit,balance=0,command;

    printf("***ACME cheakbook-balancing program***\n\n"
           "Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
           for(;;){
            printf("enter command\n");
            scanf("%d",&command);

            switch(command){
                    case 0:balance = 0;
                           break;

                    case 1:printf("enter amount of credit: ");
                           scanf("%d",&credit);
                           balance+=credit;
                           break;

                    case 2:printf("enter balance of debit: ");
                           scanf("%d",&debit);
                           balance-=debit;
                           break;

                    case 3:printf("cerrent balance is %d: ",balance);
                           break;

                    case 4:return 0;

                    default:printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit");
                            break;
                            }
           }

       getch();
}
