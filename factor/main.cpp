#include <bits/stdc++.h>

using namespace std;

int main()
{int n;cin>>n;
    vector<int>v(n);


    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int result = 0;

    for(int i = 0;i<n-1;i++){

            int difference = v[i+1]-v[i];
       if(difference==0){

            result++;
            v[i+1] +=1;
        }
    }
    cout<<result<<endl;


    return 0;
}
