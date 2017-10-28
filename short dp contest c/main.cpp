#include<bits/stdc++.h>

using namespace std;

char number[30];
int dp[30][500];
int len;

int calculate(int i, int value){

    if(i == len)
    {
        return 1;
    }

    if(dp[i][value]!=-1)return dp[i][value];
    int temp=0,r=0;

    for(int I = i;I < len;I++){
        temp += number[I] - '0';
        if(temp >= value)
            r += calculate(I+1,temp);
    }


    dp[i][value]=r;
    return dp[i][value];
}

int main(){
    int counter = 1;

    while(1){

        memset(dp,-1,sizeof(dp));

        scanf("%s",number);

        //if(strcmp(number,"bye")==0)return 0;
        if(number[0]=='b')return 0;

        len = strlen(number);

        int r = calculate(0,0);

        cout<<counter++<<". "<<r<<endl;
    }

    return 0;
}
