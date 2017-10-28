#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
  float monthly_interest,amount,yearly_interest,total_interest=0,monthly_payment;

    printf("enter the loan amount,the interest rate per year and monthly payment\n");
    scanf("%f%f",&amount,&yearly_interest);

    monthly_interest=yearly_interest/(12*100);

    printf("your minimum monthly payment is %f.mnthly payment : ",monthly_interest*amount+1);
    scanf("%f",&monthly_payment);

    if(monthly_payment<(monthly_interest*amount+1)){
        printf("your monthly payment is too low and with this monthly payment the loan amount could not be repaid\n");

    }
    else{
       for(i=1;i<=10000;i++){
            if(amount<=monthly_payment)
               printf("your last month payment is %f\n",amount);

        amount=amount+(amount*monthly_interest)-monthly_payment;

        total_interest+=(amount*monthly_interest);



        if(amount<=0){
                printf("%d months will take to repay this loan and your total interest is %f\n",i,total_interest);
            break;}}
    }
    return 0;
}
