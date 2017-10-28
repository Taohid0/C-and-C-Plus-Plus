#include <bits/stdc++.h>

using namespace std;

int main()
{   string str[1001],name,result;
    int score[1001] = {0},scr,n;
    cin>>n;
    int max = -1;
    for(int i = 0;i<n;i++){
        cin>>name>>scr;getchar();
        str[i] = name;
        score[i] = scr;
    }

    int j;string t[10001] ;
    for(int i = 0;i<n;i++){ //t = str[i];
         if(t[i]!="0")
        for( j =i+1;j<n;j++){
            if(str[j]==str[i]){
                score[j]+=score[i];
                score[i] = score[j];
               t[j] = "0";
            }
        }

    }

      for(int i = 0;i<n;i++){
        if(score[i]>max){
            max = score[i];
            result = str[i];
        }
    }
    cout<<result<<endl;
    return 0;
}
