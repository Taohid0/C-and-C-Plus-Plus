#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string str,result[1001];
    int scr;
   // int scr2[1001];
    int score[1001];
    for(int i = 0;i<n;i++){
        cin>>str>>scr;

         if(str == result[i]){

             score[i]+=scr;
            }
         }


        if(score[i]<scr){
            result = i;
            score = scr;
        }}
    }
    cout<<str[i]<<endl;
    return 0;
}
