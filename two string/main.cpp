#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int length = (int)s.length();
    int i = 0;
    int count = 0;
    int f1 = 0,f2 = 0;string sb1;
    while(i<length-1){
       sb1 = s.substr(i,i+2);
        if(sb1=="AB" && f1==0){
            count++;
            f1 = 1;
            i+=2;


        }
        else if(sb1=="BA" && f2==0){
            count++;
            f2 = 1;
            i+=2;

        }
        i++;
    }
    if(count>1){
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}
