#include <bits/stdc++.h>

using namespace std;

int main()
{     vector<int>v;

    for(int i =1;i<=100;i++){
        for(int j = i;j<=100;j+=i){
            v[j].push_back(i);
        }
    }
    for(vector<int>::iterator itr = v.begin();itr!=v.end();itr++){
        printf("%d ",*itr);
    }
    return 0;
}
