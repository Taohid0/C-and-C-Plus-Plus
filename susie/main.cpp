#include <bits/stdc++.h>

using namespace std;

int main()
{    string str1,str2,result,result2;
     cin>>str1>>str2;
     int sum1 = 0;
     int sum2 =0;
     int len1 = (int)str1.size();
     int len2 = (int)str2.size();
     for(int i = 0;i<len1;i++){
        sum1+=str1[i] = '0';
     }
     int temp = 0;
      for(int i = 0;i<len2;i++){
        sum2+=str2[i] = '0';
     }
     for(int i = 1;i<len1;i++){
        if(len1-i==len2-i){
                temp = i;
            break;
        }
     }int index = 0;
     if(temp==len1){
        printf("impossible\n");
     }

     else
     while(temp){
            int temp2 = temp%2;
            temp/=2;
        result[index++] = temp2;
     } index = 0;
     if((int)result.size()<len1){
            for(int i = (int)result.size()-1;i>=0;i--){
        result2[index++] = result[i];
     }}
     if((int)result2.size()<len1){
        for(int i = (int)result2.size();i<len1;i++){
            result2[i] = 0;
        }
     }
     for(int i = len1;i>=0;i--){
        cout<<result2[i];
     }

    cout << endl;
    return 0;
}
