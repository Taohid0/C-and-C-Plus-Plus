#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,inpt;


    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        vector <int>v;
        for(int i = 1;i<=n;i++){
            cin>>inpt;
            if(inpt>0)
            v.push_back(inpt);
        }
        int l = (int)v.size();
        if(l==0){
            cout<<0;
        }
        else
        for(int i = 0;i<l;i++){
                if(i)cout<<" ";
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
