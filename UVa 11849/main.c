#include <stdio.h>

int main()
{
    long int i, a, b, counter,j, temp,ar[10000000];;
    while (scanf("%ld %ld",&a,&b)==2)
    {
        if (!a && !b) return 0;
        counter=0;

        for (i=0 ; i<a ; i++)
        {
            scanf("%ld",&ar[i]);
        }

        for(i=0;i<b;i++){
            scanf("%ld",&temp);{
            for(j=0;j<a;j++){
                if(temp==ar[j]){
                    counter++;
                }
            }
        }}
        printf("%ld\n",counter);
    }
    return 0;
}
