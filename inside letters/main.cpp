#include <bits/stdc++.h>

using namespace std;

int main()
{   int test;
    char word[105];

    scanf("%d",&test);

    while(test--){
        scanf("%s",word);
        int length = strlen(word);

        if(length<=10){
            printf("%s\n",word);
        }
        else
            printf("%c%d%c\n",word[0],length-2,word[length-1]);
    }
    return 0;
}
