#include <bits/stdc++.h>

using namespace std;

int main()
{   long i;
     int numOfStudents;
    double exchange,total,equalizeAmount,differ,negativeSum,positiveSum;

    while(scanf("%d",&numOfStudents)==1){

        if(numOfStudents==0){
            break;
        }

      double amountSpent[numOfStudents];
       total = 0.0;
       negativeSum = 0;
       positiveSum = 0;
       for(i = 0;i<numOfStudents;i++){
        scanf("%lf",&amountSpent[i]);

        total+=amountSpent[i];
       }

         equalizeAmount = total/numOfStudents;

         for(i = 0;i<numOfStudents;i++){
            differ =  (double) (long) ((amountSpent[i] - equalizeAmount) * 100.0) / 100.0;

            if(differ>0)
            {

                positiveSum+=differ;
            }
            else{
                  negativeSum+=differ;
            }



         }
         if((-1*negativeSum)>positiveSum){
            exchange = -1*negativeSum;
         }

         else
            exchange = positiveSum;


         printf("$%.2lf\n",exchange);


    }



    return 0;
}
