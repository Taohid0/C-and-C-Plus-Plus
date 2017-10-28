#include <bits/stdc++.h>

using namespace std;

int main()
  {
      string name;
    int n;
    cin>>n;
    vector<pair<string,int > > v(n);
    map<string,int>m;

    for(int i = 0;i<n;i++){
        cin>>v[i].first >>v[i].second;
        m[v[i].first]+=v[i].second;
    }
   set<string>winner;

    int max(-1001);

    for(map<string,int>:: iterator it = m.begin();it!=m.end();it++){
        if(it-> second>max){
                max = it->second;
                winner.clear();
                winner.insert(it->first);
        }
        else if(it->second==max){
            winner.insert(it->first);
        }
    }
    if((int)winner.size()>1){
            m.clear();
        for(vector <pair<string,int> > :: iterator it = v.begin();it!=v.end();it++){
            m[it->first] += it->second;

            if(m[it->first]>=max ){ //&& winner.count(it->first) == 1){
                winner.clear();
                winner.insert(it->first);
                break;
            }
        }
    }
    cout<<*winner.begin()<<endl;
    return 0;
}
