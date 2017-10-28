#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,p,x,y,test[1005],temp = 0,result[1005],sum3 = 0;
    int sum = 0;
    scanf("%d%d%d%d%d",&n,&k,&p,&x,&y);

    int itr = n-k;

    for(int i = 0;i<k;i++){
        scanf("%d",&test[i]);
        sum+=test[i];
    }
    for(int i = 0;i<itr;i++){
        result[i] = 5;

    }int sum2 = 0;
    k = itr;
    int k2 = itr;
    while(k--){
    for(int i = itr;i>=0;i--){
        sum2+=result[i];

        if((sum+sum2)<=x){
            break;
        }
        else
            result[i] = 1;}

    }for(int i = itr;i>=0;i--){
   sum3+=result[i];}

   if(sum3>=y && sum3<=x){
    for(int i = 0;i<itr;i++){
        printf("%d ",result[i]);
        temp =1;
    }}
    if(temp==1)
    printf("\n");

    else
        printf("-1\n");
    return 0;
}
