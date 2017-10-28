#include <stdio.h>
#include <stdlib.h>

int main()
{   int t,i,h1,m1,m2,mr,hr,m;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d%d",&h1,&m1);

        m = h1*60 + m1;

        m2 = 720 - m;

        hr = m2/60;
        mr = m2%60;

        if(hr <= 0){
            hr = 12;
        }
        if(mr >= 60){
            mr = 00;

        }

        printf("%.2d : %.2d\n",hr,mr);

    }
    return 0;
}
