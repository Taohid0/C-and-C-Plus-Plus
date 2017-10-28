#include <stdio.h>

int main ()
{ long int frnds,mug,volume,minimum,i,sum;

   while(scanf("%ld%ld",&frnds,&mug)==2){

        minimum = -1;
        sum = 0;
    for(i=1;i<=frnds;i++)
    {
        scanf("%ld",&volume);
        if(volume>=minimum)
        {
            minimum = volume;
        }
        sum+=volume;
    }
    if((sum+minimum)<=mug)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
}
    return 0;
}
