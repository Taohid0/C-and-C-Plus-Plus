#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long>v;
    int n,num;
    cin>>n;
    while(n--){
     cin>>num;
     v.push_back(num);
    }
    sort(v.rbegin(),v.rend());

    for(vector<long>::iterator it = v.begin();it!=v.end();it++){
        cout<<*it<< " ";
    }
    cout<<"\n";
    return 0;
}
