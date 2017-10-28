#include <stdio.h>
#include <stdlib.h>

int digit (int n1,int n2){
                int i,j,count = 0;

            for(i=n1;i<=n2;i++){
                for(j=2;j<i;j++){
                    if(i%j==0)
                        {break;}

                }  if(j==i){
                    count++;
                }

            }
            return count;}

int main()
{   int t,a,b;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&a,&b);
        printf("%d\n",digit(a,b));
    }
    return 0;
}
