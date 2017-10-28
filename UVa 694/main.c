#include <stdio.h>
#include <stdlib.h>

int main()
{   long num,limit,temp,count,i=0;

   while(scanf("%ld%ld",&num,&limit)==2){
    if(num==-1 && limit ==-1){
        break;
    }
    count = 0;
    i++;
    temp = num;
    while(num<=limit){
            if(num==1){
                count++;
                break;
            }
        else if(num%2==0){
            num/=2;
            count++;
        }
        else
        {
            count++;
            num = num*3+1;
        }
    }
    printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,temp,limit,count);
   }
    return 0;
}
