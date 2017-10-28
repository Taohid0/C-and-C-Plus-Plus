#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    double a0,an,c,sum;
    scanf("%d",&test);
    while(test--){
            sum=0;
            printf("\n");
        scanf("%d",&n);
        scanf("%lf",&a0);
        scanf("%lf",&an);

        while(n--){
            scanf("%lf",&c);
            sum+=c;
        }
        printf("%.2lf\n",((a0+an)/2)-sum);
    }

    return 0;
}
