#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,get,out,sum = -1;
    int total = 0;
    scanf("%d",&test);

    while(test--){
        scanf("%d%d",&out,&get);
        total+=get;
        int temp = total-out;
        total-=out;
        if(sum<temp){
            sum = temp;
        }



    }
    if(sum>0)
        printf("%d\n",sum);
    else
        printf("0\n");

    return 0;
}
