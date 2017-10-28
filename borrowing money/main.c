#include <stdio.h>
#include <stdlib.h>

int main()
{int i,amount,monthly_payment;
float monthly_interest,yearly_interest;

    printf("enter the loan amount,the interest rate per year and monthly payment\n");
    scanf("%d%f%d",&amount,&yearly_interest,&monthly_payment);
    monthly_interest=yearly_interest/(12*100);

    if(monthly_payment<(monthly_interest*amount)){
        printf("your mothly payment is too low and with this monthly payment the loan amount could not be repaid\n");

    }
    else
       for(i=1;i<=10000;i++){
        amount=amount+(amount*monthly_interest)-monthly_payment;

        if(amount<=0){
                printf("%d months will take to repay this loan",i);
            break;}
    }
    return 0;
}
