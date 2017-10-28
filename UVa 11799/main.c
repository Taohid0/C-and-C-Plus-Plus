#include <stdio.h>
#include <stdlib.h>

int main()
{   long int test,i,j,number_student,result,speed;

    scanf("%ld",&test);
    for(i=1;i<=test;i++){
            result = -1;

        scanf("%ld",&number_student);

        for(j=1;j<=number_student;j++){
            scanf("%ld",&speed);

            if(speed>=result){
                    result = speed;
            }
        }
        printf("Case %ld: %ld\n",i,result);
    }
    return 0;
}
