#include <bits/stdc++.h>

using namespace std;

int main()
{   string s1,s2;
    vector <int>num1,num2,result;

    int carry =0;

    cout << "enter two numbers : " << endl;
    cin>>s1>>s2;

    int len1 = (int) s1.size();
    int len2 =(int) s2.size();

    for(int i = 0;i<len1;i++){
        num1.push_back(s1[i] - '0');
    }

    for(int i =0;i<len2;i++){
        num2.push_back( s2[i] - '0');
    }

    int i = len1-1,j = len2-1;

    for(;i>=0 && j>=0;){
        int temp = (num1[i]+num2[j]+carry)%10;
        result.push_back(temp );
        carry = (num1[i] + num2[j]+carry)/10;
        i--;j--;
    }

    if(len1>len2){
        while(i>=0){
            int temp = (num1[i]+carry)%10;
            result.push_back(temp);
            carry = (num1[i--]+carry)/10;

            }
        }

    else if(len2>len1){
        while(j>=0){
            int temp = (num2[j]+carry)%10;
             result.push_back(temp);
            carry = (num2[j--]+carry)/10;

            }
        }

        for(int k = (int)result.size()-1;k>=0;k--){
            cout<<result[k];
        }

    return 0;
}
