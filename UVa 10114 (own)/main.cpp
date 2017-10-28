#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,loanDuration,numberOfDepreciation,month;
    double downPayment,depreciation[101],loan,monthlyDepreciation;

    while(true)
    {
        cin>>loanDuration>>downPayment>>loan>>numberOfDepreciation;

        if(loanDuration<0)
        {
            return 0;
        }

        while(numberOfDepreciation--)
        {
            cin>>m>>monthlyDepreciation;

            for(int i = m;i<101;i++)
            {
                depreciation[i] = monthlyDepreciation;
            }
        }

        double monthlyPayment = loan/loanDuration;
        double currentValue = (loan+downPayment)*(1-depreciation[0]);
        month = 0;
        while(loan>currentValue)
        {
            month++;
            loan-=monthlyPayment;
            currentValue = currentValue*(1-depreciation[month]);
        }
        cout<<month<<" month";
        if(month!=1)
        {
            cout<<"s";
        }
        cout<<endl;
    }
    return 0;
}
