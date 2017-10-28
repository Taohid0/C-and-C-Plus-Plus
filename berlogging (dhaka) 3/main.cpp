#include <bits/stdc++.h>

using namespace std;

int main()
{   string str[1001],result;
    int n,score[1001]={0};
    int max = -10000;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>str[i]>>score[i];

       for(int j = 0;j<i;j++){

        if(str[i]==str[j]){


            score[i] += score[j];
            score[j] = 0;


        }
       }

       }

    for(int k= 0;k<n;k++){
        if(score[k]>max){
                max = score[k];
            result = str[k];

    }}
    cout<<result<<endl;

    return 0;
}
