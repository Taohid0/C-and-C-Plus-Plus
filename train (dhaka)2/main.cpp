#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2,str3,sbstr;;
    cin>>str1>>str2>>str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();
    int v1 = 0,v2 = 0,temp;

    for(int i = 0;i<len1 && (i+len2<=len1);i++){
        if(str1[i]==str2[0]){
            string sbstr = str1.substr(i,i+len2);
            {temp = i;

                if(sbstr==str2){
                        v1=1;

                    break;
                }
            }
        }
    }

       for(int i = temp;i<len1 && (i+len3<=len1);i++){
        if(str1[i]==str3[0]){
            string sbstr = str1.substr(i,i+len3);
            {

                if(sbstr==str3){
                        v1=2;
                    break;
                }
            }
        }
    }cout<<temp<<endl<<v1;
       for(int i = 0;i<len1 && (i+len3<=len1);i++){
        if(str1[i]==str3[0]){
            string sbstr = str1.substr(i,i+len3);
            {
            temp = i;
                if(sbstr==str2){
                        v2=1;

                    break;
                }
            }
        }
    }
       for(int i = temp;i<len1 && (i+len2<=len1);i++){
        if(str1[i]==str2[0]){
            string sbstr1 = str1.substr(i,i+len2);
            {

                if(sbstr1==str2){
                        v2=2;
                    break;
                }
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
