#include <bits/stdc++.h>

using namespace std;

int main()
{   int j;
    char word[200];
    int fre[200];

    while(scanf("%s",word)){
            int t,length = 0;

            for(t = 0;word[t]!='\n';t++){
                length++;
            }

            for(j = 0;j<200;j++){
                fre[j]=0;
            }

        int run = 0;

        for(int i = 0;i<length;i++){
           int c =word[i];
            fre[c]++;
            if(fre[c]==1){
                run++;
            }
        }

        for(int k = run-1;k>=0;k--){
                if(fre[k]>0){
            printf("%d %d",word[k],fre[k]);
            printf("\n");
        }}
        printf("\n");
    }
    return 0;
}
