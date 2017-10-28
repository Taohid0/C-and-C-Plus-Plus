#include <bits/stdc++.h>


using namespace std;

int main()
{
    string word;
    cin >> word;
    int length = word.size();

     if(length==1){
        printf("%c",tolower(word[0]));
     }
    else
        if((word[0]<=122 && word[0]>=97) && (word[1]<=122 && word[1]>=97)){
        cout << word;
    }

    else   if((word[0]<=122 && word[0]>=97) && (word[1]<=90 && word[0]>=65)){
        printf("%c",toupper(word[0]));

    for(int i = 1;i<length;i++){
        printf("%c",tolower(word[i]));

    }}
    else if ((word[0]<=90 && word[0]>=65) && (word[1]<=90 && word[1]>=65)){
          for(int i = 0;i<length;i++){
        printf("%c",tolower(word[i]));

    }}
    else
        cout << word;

    return 0;
}
