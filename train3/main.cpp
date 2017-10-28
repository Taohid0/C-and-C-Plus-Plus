#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str1[1001],str2[1001],str3[1001];
    cin>>str1;//getchar();
    cin>>str2;//getchar();
    cin>>str3;//getchar();
    int j,v1 = 0,v2 = 0,temp = 0;

    for(int i = 0;i<(int)strlen(str1);i++){
        if(str1[i]==str2[0]){

            for(j = 0;j<(int)strlen(str2);j++){
                if(str1[i+j]!=str2[j]){
                    break;
                }
            }
            if(j==(int)strlen(str2)){
                    v1 = 1;temp = i+1;
                break;
            }
        }
    }


     for(int i = temp;i<(int)strlen(str1);i++){
        if(str1[i]==str3[0]){
            for(j = 0;j<(int)strlen(str3);j++){
                if(str1[i+j]!=str3[j]){
                    break;
                }
            }
            if((int)strlen(str3)==j){
                    v1 = 2;
                break;
            }
        }
    }


        for(int i = 0;i<(int)strlen(str1);i++){
        if(str1[i]==str3[0]){

            for( j = 0;j<(int)strlen(str3);j++){
                if(str1[i+j]!=str3[j]){
                    break;
                }
            }
            if((int)strlen(str3)==j){temp = i+1;
                    v2 = 1;
                break;
            }
        }
    }cout<<temp;cout<<str1[2];
   for(int i = temp;i<(int)strlen(str1);i++){
        if(str1[i]==str2[0]){
            for(j = 0;j<(int)strlen(str2);j++){
                if(str1[i+j]!=str2[j]){
                    break;
                }
            }
            if ((int)strlen(str2)==j){
                    v2 = 2;
                break;
            }
        }
    }
     if(v1==2 && v2==2){
        printf("both\n");
    }
    else if(v1==2 && v2<2){
        printf("forward\n");
    }
    else if(v2==2 && v1<2){
        printf("backward\n");
    }
    else
        printf("fantasy\n");
return 0;
}
