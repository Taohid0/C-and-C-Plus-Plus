#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int boxTickets,sideLineTickets,premiumTickets,generalAdmissionTickets,boxTicketsIncome,sideLineTicketsIncome,premiumTicketsIncome,
     generalAdmissionTicketsIncome,totalIncome,totalTickets;
     float averageIncome;
    printf("how many tickets were sold for box category?\n");
    scanf("%d",&boxTickets);

    printf("how many tickets were sold for side line category?\n");
    scanf("%d",&sideLineTickets);

    printf("how many tickets were sold for premium category?\n");
    scanf("%d",&premiumTickets);

    printf("how many tickets were sold for general admission category?\n");
    scanf("%d",&generalAdmissionTickets);

    totalTickets=boxTickets+sideLineTickets+premiumTickets+generalAdmissionTickets;
    boxTicketsIncome=boxTickets*250;
    sideLineTicketsIncome=sideLineTickets*100;
    premiumTicketsIncome=premiumTickets*50;
    generalAdmissionTicketsIncome=generalAdmissionTickets*25;
    totalIncome=boxTicketsIncome+sideLineTicketsIncome+premiumTicketsIncome+generalAdmissionTicketsIncome;
    averageIncome=(float)totalIncome/totalTickets;

    printf("Ticket Type     tickets Price     NO of Tickets     Total Income\n"
           "Box                 250               %d                 %d     \n"
           "Side Line           100               %d                 %d     \n"
           "Premium              50               %d                 %d     \n"
           "General Admission    25               %d                 %d     \n\n\n",boxTickets,boxTicketsIncome,sideLineTickets,
                                                                              sideLineTicketsIncome,premiumTickets,
                                                                              premiumTicketsIncome,
                                                                              generalAdmissionTickets,
                                                                              generalAdmissionTicketsIncome);


     printf("Total no of Tickets sold:%d\n",totalTickets);
     printf("Total Income:%d\n",totalIncome);
     printf("Average Income:%f\n",averageIncome);
     getch();

    return 0;
}
