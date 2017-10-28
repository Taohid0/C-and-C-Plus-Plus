#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int accountNumber,minute,dayMinute,nightMinute;
 char ch;
 float dayy,nightt;

    printf("please enter your account number : \n");
    scanf("%d",&accountNumber);



    printf("please enter your service code : \n");
    scanf("%c",&ch);



    if (ch == 'r' || ch == 'R'){
        printf("please enter the number of minuted the telephone service used : \n");
        scanf("%d",&minute);

        printf("your account number : %d\nyour service type : %c\nyou have used %d minutes\n",accountNumber,
                                                                                        ch,minute);
       if(minute<=50)
        printf("the amount due from you is 10");

       else if (minute>50)
        printf("the amount due from you is Tk%.2f",(minute*.2+10)-(minute*50*.2));}

    else if (ch == 'p' || ch == 'P'){
        printf("enter the number of minutes the service was used during the day\n");
        scanf("%d",&dayMinute);

        printf("the number of minutes the service was used during the night\n");
        scanf("%d",&nightMinute);

        dayy=25+(minute*.1)-(75*.1);
        nightt=25+(minute*.05)-(100*.1);

        if(dayMinute<=75 && nightMinute<=100)
            printf("the amount due from you is $25\n");

        else if (dayMinute<=75 && nightMinute>100)
            printf("the amount due from you is $%.2f",25+nightt);

        else if (dayMinute>75 && nightMinute<=100)
            printf("the amount due from you is $%.2f",25+dayy);

        else if (dayMinute>75 && nightMinute>100)
            printf("the amount due from you is $%.2f",25+dayy+nightt);}

    getch();

    return 0;
}
