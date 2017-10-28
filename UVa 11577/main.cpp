#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test;
   string s;
   int fre[250] = {0};

   cin>>test;

   while(test--){
    cin>>s;
    int max = -1;

    for(int i = 0;i<(int)s.length();i++){
            int n = s[i];
            fre[n]++;

    }
    for(int i = 'a';i<='z';i++){cout<<fre[i];
        if(fre[i]>max){
            max =fre[i];
        }
    }
    for(int i = 'a';i<='z';i++){
        if(fre[i]==max){
            printf("%c",i);
        }
    }
    if(test>2){
        cout<<endl;
    }
   }
    return 0;
}
