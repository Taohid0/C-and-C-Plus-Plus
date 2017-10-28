#include <bits/stdc++.h>

using namespace std;

bool prime[100001];

void isPrime(){
                prime[0] = true;
                prime[1] = true;

                for(int i  = 2;i*i<=100000;i++){
                        if(!prime[i]){
                    for(int j = i*i;j<=100000;j+=i){
                        prime[j] = true;
                    }
                }}
                    }
int main()
{
    isPrime();
    string s;
    int p;

    while(cin>>s){
            int max = -1;
        if(s=="0"){
            break;
        }
        int len = (int) s.size();

        for(int i = 0 ;i<len;i++){
            for(int j = len-1;j>=0;j--){
                istringstream buf (s.substr(i,j));
                buf>>p;

                if(p<=100000){
                    if(!prime[p])
                    {

                        if(max<p){
                            max = p;
                        }
                    }
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
