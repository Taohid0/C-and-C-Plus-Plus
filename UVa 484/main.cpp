#include <bits/stdc++.h>

using namespace std;

//cannot be solved with map only without overriding
int main()
{
long long n,i,k,x;
vector<long long>name;
map<long long, long long>occ;
map<long long, long long>b;
name.clear();
occ.clear();
b.clear();
while(cin>>x)
    {
    if(b[x]!=1){
                b[x]=1;
                name.push_back(x);
                occ[x]++;
                }
    else  occ[x]++;
    }
k=name.size();
for(i=0;i<k;i++)
    {
    cout<<name[i]<<" "<<occ[name[i]]<<endl;
    }
return 0;
}
