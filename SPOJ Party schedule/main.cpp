#include <bits/stdc++.h>

using namespace std;
int weights[1000],profit[1000],capacity,ansWeight,ansGain,totalParty;

int dpMartix[1000][1000];

int calculateValue(int i,int weight)
{

    if(i==totalParty)return 0;
    else if(dpMartix[i][weight]!=-1)return dpMartix[i][weight];

    int profit1=-100,profit2=-100;

    if (weights[i]+weight<=capacity)
    {
       profit1= calculateValue(i+1,weight+weights[i]);
    }
    profit2=calculateValue(i+1,weight);


        dpMartix[i][weight]=max(profit1,profit2);

        return dpMartix[i][weight];

}

int main()
{
    while(true)
    {
        memset(dpMartix,-1,sizeof(dpMartix));

        cin>>capacity>>totalParty;
        if(capacity==0 && totalParty==0)break;

        for(int i=0;i<totalParty;i++)
        {
            cin>>weights[i]>>profit[i];
        }
        int ans = calculateValue(0,0);
         cout<<ans;
    }

    return 0;
}
