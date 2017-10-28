#include <stdio.h>
#include <stdlib.h>

int main()
{int command,credit,debit,balance=0;


    printf("***ACME cheakbook-balancing program***\n"

           "0=clear, 1=credit, 2=debit,3=balance, 4=exit\n\n\n");

    while(1){
            printf( "please select a command:\n");
            scanf("%d",&command);
    switch(command){
    case 0: balance=0.0;
            break;
    case 1:printf("amount of credit:\n");
           scanf("%d",&credit);
           balance+=credit;
           break;
    case 2:printf("amount of debit:\n");
           scanf("%d",&debit);
           balance-=debit;
           break;
    case 3:printf("your current balance is $%d\n",balance);
           break;
    case 4:exit(0);

    default:printf("0=clear, 1=credit, 2=debit,3=balance, 4=exitn\n\n");
            break;}}
    return 0;
}
