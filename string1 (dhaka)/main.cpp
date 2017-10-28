#include <bits/stdc++.h>

using namespace std;

string str1,str2,str3;

int main()
{  int v1 = 0,v2 = 0,i,j;

    cin >> str1>> str2 >> str3;
    int len1 = str1.length();

    str4 = str2+str3;
    str5 = str3+str2;
    int len2 = str4.length();
    int len3 = str5.length();
    int index =0;
    for(int i = 0;i<len1;i++){
        if(str2[index++]==str4[i]){
            v1++;
        }
    }
    if(v1 && v2){
        printf("both\n");
    }
   else  if(v1){
        printf("forward\n");
    }
    else if(v2){
        printf("backward\n");
    }
    else
        printf("fantasy\n");

    return 0;
}
