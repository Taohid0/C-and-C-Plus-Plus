#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,test,value,arr[1001];
    cin>>n;
    for(int i = 0;i<n;i++)
    {
       memset(arr,0,sizeof(arr));
       cin>>test;
       getchar();
       for(int j = 0;j<test;j++)
       {
           string s;
           getline(cin,s);
           stringstream ss(s);
           while(ss>>value){
           arr[value]++;
           }
       }
       if(test==0){
        cout<<"Empty"<<endl;
        continue;
       }
       bool flag = false;
       vector<int>v;
       for(int k = 0;k<1001;k++)
       {
           if(arr[k]==test)
           {
               v.push_back(k);
               flag =true;
           }
       }
       sort(v.begin(),v.end());
       for(int I= 0;I<(int)v.size();I++)cout<<v[I]<< " ";
       if(!flag)cout<<"Empty";
       cout<<endl;
    }
    return 0;
}
