#include <bits/stdc++.h>

using namespace std;

int main()
{  int sum = 0,disk;
   char original[1005],tryy[1005];
    scanf("%d\n",&disk);
    scanf("%s\n%s",original,tryy);

        for(int i = 0;i<disk;i++){

         int temp1 = original[i]-'0';
         int temp2 = tryy[i] - '0';

        int dif = abs(temp1-temp2);
        if(dif>5){
            dif = 10-dif;

        }


            sum+=dif;
    }
    printf("%d\n",sum);

    return 0;
}
