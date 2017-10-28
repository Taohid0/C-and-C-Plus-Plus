#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>v1(2001);
    vector<int>v2(2001);

    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v2.rbegin(),v2.rend());

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(v1[i]==v2[j]){
                cout<<j+1<< " ";
                break;
            }
        }
    }
    return 0;
}
