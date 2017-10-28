#include <bits/stdc++.h>

using namespace std;

int main()
{
   string str;

    cin>>str;

    for(int i = 0;i<(int)str.length();i++){
        if(str[i]=='.'){
            printf("0");
        }
        else if (str[i]=='-' && str[i+1] == '.'){
            printf("1");
            i++;
        }
        else {
                i++;
            printf("2");
        }

    }
    printf("\n");
    return 0;
}
