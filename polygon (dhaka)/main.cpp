#include <bits/stdc++.h>

using namespace std;

int main()

{   int n,num,result;
     vector<int>v;
    cin>>n;
    while(n--){
        cin>>num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());
    result  = 1;
    for(int i = 0;i<(int)v.size();i++){
        if(v[i]==result){
            result++;
        }
    }
cout<<result<<endl;
    return 0;
}
