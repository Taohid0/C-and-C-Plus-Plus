#include <bits/stdc++.h>

using namespace std;

int main()
{   int n, sum= 0;
    char cmd[5];

    scanf("%d\n",&n);

    while(n--){
       //  sum ;
        gets(cmd);

        if(cmd[0]=='+' || cmd[1]=='+'){
            sum++;
        }
        else
            sum--;

    } printf("%d\n",sum);
    return 0;
}
