#include <bits/stdc++.h>

using namespace std;

int main()
{   long  t,i;
    long si,ri,j = 0;
    double temp,big = -1.0;
    scanf("%ld",&t);
    long sum[200005];

    for(i = 1;i<=t;i++){
        scanf("%ld%ld",&si,&ri);
        temp = (si+ri)/2;

        if(temp>=big){
            big  = temp;
            sum[j] = i;
            j++;
        }
    }
    for(i = 0;i<j;i++){

            printf("%ld ",sum[i]);

    }


    return 0;
}
