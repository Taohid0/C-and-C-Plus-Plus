#include <bits/stdc++.h>

using namespace std;

int result[3655];
int main()
{   int day;


    int test,parties,parameter;
    scanf("%d",&test);

    while(test--){

            for(int i = 0;i<3655;i++){
             result[i]=1;
    }


        scanf("%d%d",&day,&parties);

        while(parties--){
            scanf("%d",&parameter);

            for(int i = parameter;i<=day;i+=parameter){
            result[i]=0;
            }
            }

        for(int i = 6;i<=day;i+=7){
        result[i]=1;
        result[i+1] = 1;

    }

    int sum = 0;
    for(int i = 1;i<=day;i++){
        if(result[i]==0){
            sum++;
        }
    }
    printf("%d\n",sum);
    }
    return 0;
}
