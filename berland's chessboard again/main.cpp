#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[9];
    int result = 0,temp =0, temp2 = 0;

    for(int i = 0;i<8;i++){
        cin>>s[i];
        temp = 0;
        for(int j  = 0;j<8;j++){
            if(s[i][j]=='B'){
                temp++;
            }}
            if(temp==8){
                result++;
            }
            else
                temp2 = temp;
        }
        result+=temp2;
        cout<<result<<endl;

    return 0;
}
