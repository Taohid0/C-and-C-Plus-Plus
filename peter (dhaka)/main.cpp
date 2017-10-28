#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2,str3,sbstr;
    cin>>str1;//getchar();
    cin>>str2;//getchar();
    cin>>str3;//getchar();
    int v1 = 0,v2 = 0,i,j,k,l;


    int len1 = str1.length();
    int len2  = str2.length();
    int len3 = str3.length();

    for( i = 0;i<len1;i++){
        if(str1[i]==str2[0]){

            sbstr = str1.substr(i,i+len2);
            if(sbstr.compare(str2)==0){
                v1 = 1;


                break;
            }
        }
    }

   if(v1==1)
    for( j = i-1;j<len1;j++){
        if(str1[j]==str3[0]){

            sbstr = str1.substr(j,j+len3);
            if(sbstr==str3){
                v1 += 1;
                break;
            }
        }
    }



      for( k = 0;k<len1;k++){
        if(str1[k]==str3[0]){
            sbstr = str1.substr(k,k+len3);
            if(sbstr==str3){
                v2=1;

                break;
            }}

    }

    if(v2==1)
     for( l = k-1;l<len1;l++){
        if(str1[l]==str2[0]){

            sbstr = str1.substr(l,l+len2);
            if(sbstr==str2 ){
                v2+=1;
                break;
            }
        }
    }

    if(v1==2&&v2==2){
        printf("both\n");
    }
    else if(v1==2){
        printf("forward\n");
    }
    else if(v2==2){
        printf("backward\n");
    }
    else printf("fantasy\n");

    return 0;
}
