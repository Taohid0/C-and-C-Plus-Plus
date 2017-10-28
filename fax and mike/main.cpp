#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    string s,sbstr,rstr;
    int k;
    cin>>s>>k;
    string s2;
    int len = (int)s.size()/k;

    int result = 0;
   int m = len;
    int temp = 0;
   int temp2  = 1;
   temp2 = temp*m-1;
   int temp3 = temp2;
   int j;
    for(int i = 0;i<k;i++){
            sbstr = s.substr(temp+len);

          for(j = 0;j<(int)sbstr.length();j++){
            if(s[temp3--]!=sbstr[j]){
                break;
            }
          }
          if(j==0){
            result++;
          }  temp+=len;
          temp2 = temp*m++-1;
          temp3 = temp2;


        }




          if(result==k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
