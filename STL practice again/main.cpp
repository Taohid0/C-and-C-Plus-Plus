#include <bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define  rall(c) c.rbegin(),c.rend()
#define itr(v) for(vector<int>::iterator itr =v.begin();itr!=v.end();itr++)

using namespace std;

int main()
{    vector <int>v;

     v.push_back(1);
       v.push_back(2);
         v.push_back(3);
           v.push_back(4);
             v.push_back(5);




//             sort(all(v));
//
//             for(vector<int>::iterator it = v.begin();it!=v.end();it++){
               itr(v){
                cout<<*itr<<'\n';
             }
    return 0;
}
