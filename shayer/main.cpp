#include<bits/stdc++.h>
#include<conio.h>

int main()
{
    double amount;
    amount = .20;

    cprintf("printing 5% tax table\n\r");
    cprintf("press a key to stop.\n\n\r");
    do{
        cprintf("amount : %f,tax: %f\n\r",amount,amount*.5);
        if(kbhit())break;
        amount = amount + .20;
        }while(amount<100.0);
        return 0;
}
